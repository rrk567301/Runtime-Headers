@class NSNumber, NSString;

@interface DECollectionProgress : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double percentComplete;
@property (retain, nonatomic) NSNumber *estimatedTimeRemaining;
@property (retain, nonatomic) NSString *statusString;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPercentComplete:(double)a0;
- (id)initWithPercentComplete:(double)a0 withEstimatedTimeRemaining:(id)a1;

@end
