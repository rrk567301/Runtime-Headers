@class NSString, AXDataPoint;

@interface AXDataAnnotation : NSObject

@property (retain, nonatomic) AXDataPoint *location;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) char playsHaptic;
@property (nonatomic) char speakDuringPlayback;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0;
- (id)initWithLocation:(id)a0 label:(id)a1;

@end
