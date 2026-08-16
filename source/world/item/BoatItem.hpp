#pragma once

#include "Item.hpp"

class BoatItem : public Item
{
public:
	BoatItem(int id);

	bool use(ItemStack&, Mob& user) const override;
};