/*
 * MenuInterface.h
 *
 *  Created on: Apr 5, 2015
 *      Author: kordex
 */

#ifndef MENUINTERFACE_H_
#define MENUINTERFACE_H_

namespace BFG
{

namespace CEGUIMenu
{

class MenuInterface
{
public:
	virtual ~MenuInterface() {};
	
	virtual void init() = 0;
	virtual void destroy() = 0;
	
	virtual void setVisible( bool visible ) = 0;
	virtual bool isVisible() = 0;
	
};

} /* namespace CEGUIMenu */

} // namespace BFG

#endif /* MENUINTERFACE_H_ */
