@class NSArray;

@interface MADVisionResult : MADResult

@property (readonly, nonatomic) NSArray *visionResults;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithVisionResults:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVisionResults:(id)a0;

@end
