@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStatePrivatizing : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *diff;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSNumber *numValidationSamples;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (unsigned long long)tag;
- (void)resume:(id)a0 completion:(id /* block */)a1;
- (id)initWithGradientDiff:(id)a0 metrics:(id)a1 numValidationSamples:(id)a2;

@end
