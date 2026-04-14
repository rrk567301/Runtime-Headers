@class NSMutableArray;

@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)activateSessionWithError:(id *)a0;
- (BOOL)deactivateSessionWithError:(id *)a0;

@end
