@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (void)recordEvent:(id)a0;
- (void)simulateCrashWithMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)historyDescription;

@end
