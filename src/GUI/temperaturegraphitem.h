#ifndef TEMPERATUREGRAPHITEM_H
#define TEMPERATUREGRAPHITEM_H

#include "graphitem.h"

class TemperatureGraphItem : public GraphItem
{
	Q_OBJECT

public:
	TemperatureGraphItem(const Graph &graph, GraphType type,
	  QGraphicsItem *parent = 0);

	qreal max() const {return _max;}
	qreal min() const {return _min;}
	qreal avg() const {return _avg;}

	void setUnits(Units units);

private:
	QString toolTip(Units units) const;

	qreal _min, _max, _avg;
};

#endif // TEMPERATUREGRAPHITEM_H
