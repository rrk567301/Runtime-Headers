@class NSArray, NSString;

@interface VNRecognizedTextObservation : VNRectangleObservation

@property (copy, nonatomic) NSArray *textObjects;
@property (nonatomic) char isTitle;
@property (readonly, copy, nonatomic) NSString *text;

+ (char)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setText:(id)a0;
- (id)topCandidates:(unsigned long long)a0;
- (id)vn_cloneObject;

@end
