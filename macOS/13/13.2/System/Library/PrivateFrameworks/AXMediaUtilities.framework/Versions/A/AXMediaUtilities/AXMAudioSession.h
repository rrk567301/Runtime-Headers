@class NSMutableArray;

@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)deactivateSessionWithError:(id *)a0;
- (BOOL)activateSessionWithError:(id *)a0;

@end
