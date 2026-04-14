@class NSSet;

@interface MADFaceDetectionResult : MADResult

@property (readonly, nonatomic) NSSet *faces;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithDetectedFaces:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDetectedFaces:(id)a0;

@end
