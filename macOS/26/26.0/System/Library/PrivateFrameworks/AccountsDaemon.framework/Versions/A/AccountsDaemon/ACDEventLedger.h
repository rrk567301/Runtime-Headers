@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (void)recordEvent:(id)a0;
- (id)init;
- (void)simulateCrashWithMessage:(id)a0;
- (id)historyDescription;
- (void).cxx_destruct;

@end
