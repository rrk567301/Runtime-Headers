@class NSNumber;

@interface DADeviceStateRecord : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSNumber *discoveryTime;
@property (retain, nonatomic) NSNumber *time;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)discoveryTimeIntervelBetweenState:(id)a0;
- (id)initWithState:(long long)a0 andTime:(id)a1;
- (id)stateTransitionAsString:(id)a0;
- (id)timeIntervelBetweenState:(id)a0;

@end
