@class NSMutableArray;

@interface IAEventDispatcher : NSObject

@property (retain, nonatomic) NSMutableArray *payloadsObservedForTesting;
@property (nonatomic) BOOL isUnitTest;

+ (id)sharedInstance;
+ (void)dispatchEvent:(id)a0 payload:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dispatchEvent:(id)a0 payload:(id)a1;

@end
