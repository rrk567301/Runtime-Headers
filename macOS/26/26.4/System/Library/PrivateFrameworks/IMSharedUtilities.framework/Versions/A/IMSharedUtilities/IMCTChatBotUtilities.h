@interface IMCTChatBotUtilities : NSObject

+ (id)IMChipListFromSuggestions:(id)a0;
+ (BOOL)IMHandleIsChatBot:(id)a0;
+ (void)removeCachedBotStatusForHandle:(id)a0;
+ (BOOL)debugChatBotDisappeared;

- (id)init;

@end
