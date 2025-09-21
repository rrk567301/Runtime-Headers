@class NSArray;

@interface IMAssistiveAccessCommunicationLimitManager : NSObject

@property (class, readonly, nonatomic) IMAssistiveAccessCommunicationLimitManager *sharedManager;

@property (readonly, nonatomic) char isAssistiveAccessRunning;
@property (readonly, nonatomic) char shouldFilterIncomingMessages;
@property (readonly, nonatomic) char shouldFilterOutgoingMessages;
@property (readonly, nonatomic) NSArray *favoriteHandleStrings;

- (char)allowsConversationWithHandleIDs:(id)a0;
- (char)allowsSendingToHandleIDs:(id)a0;

@end
