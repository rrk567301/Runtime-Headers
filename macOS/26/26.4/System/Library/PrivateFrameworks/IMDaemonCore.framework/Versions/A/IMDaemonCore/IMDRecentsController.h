@class IMTimer, NSMutableDictionary;

@interface IMDRecentsController : NSObject {
    NSMutableDictionary *_typingContext;
    NSMutableDictionary *_incomingMessagesTypingContext;
    IMTimer *_typingContextTimer;
    NSMutableDictionary *_activeDeviceForHandle;
}

+ (id)sharedInstance;

- (BOOL)hasRecentlyMessaged:(id)a0;
- (BOOL)hasRecentMessageFrom:(id)a0;
- (void)updateLatestActiveDestination:(id)a0 ForHandle:(id)a1 incomingType:(unsigned char)a2;
- (void)_setTimerForPruningTypingContext;
- (void)__pruneTypingContexts;
- (void)noteRecentMessageForPeople:(id)a0;
- (void).cxx_destruct;
- (id)activeDeviceForHandle:(id)a0;
- (void)noteRecentMessageFromChatID:(id)a0;

@end
