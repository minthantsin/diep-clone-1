#include <EntityComponentSystem/Component/Basic.hh>

#include <EntityComponentSystem/Entity.hh>

namespace shared::ecs::component
{
    Basic::Basic(Entity *entity)
        : entity(entity)
    {
    }
}
