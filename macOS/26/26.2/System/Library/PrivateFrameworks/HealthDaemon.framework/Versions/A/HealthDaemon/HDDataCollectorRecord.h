@class HKDataCollectorState;
@protocol HDDataCollector;

@interface HDDataCollectorRecord : NSObject

@property (weak, nonatomic) id<HDDataCollector> collector;
@property (retain, nonatomic) HKDataCollectorState *state;

- (void).cxx_destruct;
- (id)description;

@end
