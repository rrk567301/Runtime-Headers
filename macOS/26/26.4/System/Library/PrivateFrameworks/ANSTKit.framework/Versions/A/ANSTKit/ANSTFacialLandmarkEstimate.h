@class NSArray;

@interface ANSTFacialLandmarkEstimate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *facialLandmarks;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFacialLandmark:(id)a0;

@end
