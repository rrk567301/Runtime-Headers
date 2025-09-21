@class NSArray, NSAttributedString, CROutputRegion;

@interface VNRecognizedTextBlock : VNRecognizedText {
    CROutputRegion *_crOutputRegion;
    unsigned long long _requestRevision;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, copy, nonatomic) NSArray *baselines;
@property (readonly, nonatomic, getter=getRecognizedLanguages) NSArray *recognizedLanguages;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)string;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)confidence;
- (unsigned long long)requestRevision;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)getCROutputRegion;
- (id)initWithRequestRevision:(unsigned long long)a0 crOutputRegion:(id)a1;

@end
