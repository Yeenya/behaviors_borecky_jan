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

            Advance = {tree = 'Default'},
            Idle = {tree = 'follow_and_fire_no_stop'},

        },
    },
}