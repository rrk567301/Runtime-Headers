@class NSDictionary, VNRequestSpecifier;

@interface VNRecognizedPoints3DSpecifier : NSObject <NSSecureCoding, NSCopying> {
    VNRequestSpecifier *_originatingRequestSpecifier;
    NSDictionary *_allRecognizedPoints;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)availableGroupKeys;
- (id)availableKeys;
- (id)initWithOriginatingRequestSpecifier:(id)a0 allRecognizedPoints:(id)a1;
- (id)originatingRequestSpecifier;
- (id)pointKeyGroupLabelsMapping;
- (id)recognizedPointForKey:(id)a0 error:(id *)a1;
- (id)recognizedPointsForGroupKey:(id)a0 error:(id *)a1;

@end
