@class NSDictionary, VNRequestSpecifier;

@interface VNRecognizedPointsSpecifier : NSObject <NSSecureCoding, NSCopying> {
    VNRequestSpecifier *_originatingRequestSpecifier;
    NSDictionary *_allRecognizedPoints;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)originatingRequestSpecifier;
- (id)initWithOriginatingRequestSpecifier:(id)a0 allRecognizedPoints:(id)a1;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;
- (id)availableKeys;
- (id)recognizedPointsForGroupKey:(id)a0 error:(id *)a1;
- (id)recognizedPointForKey:(id)a0 error:(id *)a1;

@end
