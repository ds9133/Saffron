/*
 * SafRawDataChannel.h
 *
 *  Created on: Dec 13, 2014
 *      Author: Daniel Saunders
 */


#ifndef SAFRAWDATACHANNEL_H_
#define SAFRAWDATACHANNEL_H_
#include "SafDataSet.h"
#include "SafRawDataSet.h"
#include <vector>


// Forward declarations.
class SafRunner;
class SafRawDataSet;
class SafDataSet;


class SafRawDataChannel : SafDataSet
{
private:
	// Members __________________________________________________________________
	unsigned int m_nEntries;
	unsigned int m_nTriggers;
	unsigned int m_glibID;
	unsigned int m_channelID;
	std::vector<int> m_times;
	std::vector<double> m_signals;
	std::vector<int> m_triggerTimes;
	std::vector<double> m_triggerValues;


public:
	// Methods __________________________________________________________________
	SafRawDataChannel(unsigned int glibID, unsigned int channelID,
			SafRawDataSet * rawData, SafRunner * runner);
	virtual ~SafRawDataChannel();
	void clear();


	// Setters and getters ______________________________________________________
	unsigned int glibID() {return m_glibID;}
  unsigned int nEntries() {return m_nEntries;}
  unsigned int nTriggers() {return m_nTriggers;}
  void setNEntries(unsigned int n) {m_nEntries = n;}
  void setNTriggers(unsigned int n) {m_nTriggers = n;}
	unsigned int channelID() {return m_channelID;}
	std::vector<int> * times() {return &m_times;}
	std::vector<double> * signals() {return &m_signals;}
	std::vector<int> * triggerTimes() {return &m_triggerTimes;}
	std::vector<double> * triggerValues() {return &m_triggerValues;}
};

#endif /* SAFRAWDATACHANNEL_H_ */
