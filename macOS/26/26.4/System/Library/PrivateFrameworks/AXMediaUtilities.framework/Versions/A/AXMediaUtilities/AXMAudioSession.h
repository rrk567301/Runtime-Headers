@class NSMutableArray;

@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)activateSessionWithError:(id *)a0;
- (BOOL)deactivateSessionWithError:(id *)a0;

@end
