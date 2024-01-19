return {
    Team_Honza = {

        description = "Fallback group",
        simpleClass = true,

        parents = {
            "Base"
        },

        Match = function()
            return self.GetEntity ~= nil
        end,

        behaviors = {

            Advance = {tree = 'Default'},
            Idle = {tree = 'agressive_safe_move_without_stop'},

        },
    },
}