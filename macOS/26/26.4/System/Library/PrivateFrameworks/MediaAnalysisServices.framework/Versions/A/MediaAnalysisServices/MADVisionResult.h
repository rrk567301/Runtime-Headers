@class NSArray;

@interface MADVisionResult : MADResult

@property (readonly, nonatomic) NSArray *visionResults;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithVisionResults:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithVisionResults:(id)a0;

@end
