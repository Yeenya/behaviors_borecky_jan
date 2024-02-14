return {
    Individual_Honza = {

        description = "Fallback group",
        simpleClass = true,

        parents = {
            "Base"
        },

        Match = function()
            return self.GetHealth ~= nil
        end,

        behaviors = {
            Idle = {tree = 'stance_standing'},
            FollowLeader = {tree = 'follow_leader'},
            MoveLeader = {tree = 'move_leader'},
            CoverFire = {tree = 'cover_fire'},
            Advance = {tree = 'advance'}
        },
    },
}