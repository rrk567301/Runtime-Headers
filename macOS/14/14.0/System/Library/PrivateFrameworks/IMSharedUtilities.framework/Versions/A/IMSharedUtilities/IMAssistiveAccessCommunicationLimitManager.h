@class NSArray;

@interface IMAssistiveAccessCommunicationLimitManager : NSObject

@property (class, readonly, nonatomic) IMAssistiveAccessCommunicationLimitManager *sharedManager;

@property (readonly, nonatomic) BOOL shouldFilterIncomingMessages;
@property (readonly, nonatomic) NSArray *selectedContactHandleStrings;

- (BOOL)allowsConversationWithHandleIDs:(id)a0;
- (BOOL)allowsSendingToHandleIDs:(id)a0;

@end
