@class NSDateInterval;

@interface BPSTimeWindowMetadata : NSObject <BPSWindowMetadata>

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDateInterval:(id)a0;

@end
