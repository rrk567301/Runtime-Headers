@class IMTimer, NSMutableDictionary;

@interface IMDRecentsController : NSObject {
    NSMutableDictionary *_typingContext;
    IMTimer *_typingContextTimer;
    NSMutableDictionary *_activeDeviceForHandle;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)updateLatestActiveDestination:(id)a0 ForHandle:(id)a1 incomingType:(unsigned char)a2;
- (void)noteRecentMessageForPeople:(id)a0;
- (void)__pruneTypingContexts;
- (void)_setTimerForPruningTypingContext;
- (BOOL)hasRecentlyMessaged:(id)a0;
- (id)activeDeviceForHandle:(id)a0;

@end
