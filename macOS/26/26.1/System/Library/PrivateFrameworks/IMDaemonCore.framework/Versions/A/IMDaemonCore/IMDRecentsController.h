@class IMTimer, NSMutableDictionary;

@interface IMDRecentsController : NSObject {
    NSMutableDictionary *_typingContext;
    NSMutableDictionary *_incomingMessagesTypingContext;
    IMTimer *_typingContextTimer;
    NSMutableDictionary *_activeDeviceForHandle;
}

+ (id)sharedInstance;

- (void)_setTimerForPruningTypingContext;
- (void)updateLatestActiveDestination:(id)a0 ForHandle:(id)a1 incomingType:(unsigned char)a2;
- (BOOL)hasRecentlyMessaged:(id)a0;
- (BOOL)hasRecentMessageFrom:(id)a0;
- (void)noteRecentMessageForPeople:(id)a0;
- (void).cxx_destruct;
- (void)noteRecentMessageFromChatID:(id)a0;
- (id)activeDeviceForHandle:(id)a0;
- (void)__pruneTypingContexts;

@end
