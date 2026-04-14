@class NSNumber, NSString;

@interface DECollectionProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double percentComplete;
@property (retain, nonatomic) NSNumber *estimatedTimeRemaining;
@property (retain, nonatomic) NSString *statusString;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPercentComplete:(double)a0;
- (id)initWithPercentComplete:(double)a0 withEstimatedTimeRemaining:(id)a1;

@end
