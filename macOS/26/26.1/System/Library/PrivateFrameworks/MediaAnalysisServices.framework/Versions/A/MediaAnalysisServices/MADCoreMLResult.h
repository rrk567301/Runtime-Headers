@class NSArray;

@interface MADCoreMLResult : MADResult {
    NSArray *_visionResults;
}

@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithVisionResults:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (int)_packageCoreMLObservations;
- (id)initWithVisionResults:(id)a0;

@end
