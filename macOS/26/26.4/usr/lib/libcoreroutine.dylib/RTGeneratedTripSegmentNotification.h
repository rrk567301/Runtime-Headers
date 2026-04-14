@class RTTripSegment;

@interface RTGeneratedTripSegmentNotification : RTNotification

@property (readonly, nonatomic) RTTripSegment *generatedTripSegment;

- (void).cxx_destruct;
- (id)initWithGeneratedTripSegment:(id)a0;

@end
