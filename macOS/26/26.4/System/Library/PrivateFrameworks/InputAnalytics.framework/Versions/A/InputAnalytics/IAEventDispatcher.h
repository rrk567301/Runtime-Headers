@class NSMutableArray;

@interface IAEventDispatcher : NSObject

@property (retain, nonatomic) NSMutableArray *payloadsObservedForTesting;
@property (nonatomic) BOOL isUnitTest;

+ (id)sharedInstance;
+ (void)dispatchEvent:(id)a0 payload:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)dispatchEvent:(id)a0 payload:(id)a1;

@end
