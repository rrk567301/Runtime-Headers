@class NSDictionary, NSMutableDictionary;

@interface HMMEphemeralCounterContainer : NSObject {
    NSMutableDictionary *_counters;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSDictionary *counters;

- (id)init;
- (void).cxx_destruct;
- (BOOL)active;
- (void)incrementCounter:(id)a0 by:(long long)a1;
- (id)valueForCounter:(id)a0;

@end
