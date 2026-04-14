@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (void).cxx_destruct;
- (void)recordEvent:(id)a0;
- (id)init;
- (id)historyDescription;
- (void)simulateCrashWithMessage:(id)a0;

@end
