@class NSMutableArray;

@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)activateSessionWithError:(id *)a0;
- (char)deactivateSessionWithError:(id *)a0;

@end
