@class NSMutableArray;

@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)activateSessionWithError:(id *)a0;
- (BOOL)deactivateSessionWithError:(id *)a0;

@end
