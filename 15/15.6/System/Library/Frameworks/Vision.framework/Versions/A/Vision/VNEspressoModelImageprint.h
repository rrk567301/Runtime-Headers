@class VNRequestSpecifier, NSString, NSDictionary, NSData;

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding> {
    VNRequestSpecifier *_originatingRequestSpecifier;
    unsigned long long _elementType;
    unsigned long long _serializationOptions;
}

@property (class, readonly) unsigned int currentCodingVersion;
@property (class, readonly, copy) NSDictionary *codingTypesToCodingKeys;
@property (class, readonly) unsigned long long serializationMagicNumber;
@property (class, readonly) unsigned long long currentSerializationVersion;
@property (class, readonly) NSString *currentVersion;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSData *descriptorData;
@property (readonly) unsigned long long elementCount;
@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long lengthInBytes;
@property (readonly, nonatomic) unsigned long long confidenceScoreType;
@property (readonly) NSString *version;
@property (readonly, nonatomic) unsigned long long serializedLength;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (char)isSupportedCodingVersion:(unsigned int)a0 error:(id *)a1;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)a0;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)originatingRequestSpecifierForRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)printFromCSUBuffer:(id)a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;
+ (id)printFromEspressoBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;
+ (id)printWithDescriptorData:(id)a0 elementType:(unsigned long long)a1 elementCount:(unsigned long long)a2 originatingRequestSpecifier:(id)a3 error:(id *)a4;
+ (id)printWithFloat16PrecisionFloat32Data:(id)a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;
+ (id)printWithFloat16PrecisionFloat32Values:(const float *)a0 elementCount:(unsigned long long)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;
+ (char)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (char)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;
+ (char)validateDescriptorData:(id)a0 elementType:(unsigned long long)a1 elementCount:(unsigned long long)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 error:(id *)a1;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0 forCodingVersion:(unsigned int)a1;
- (id)VNEspressoModelImageprintMLMultiArrayWithConstraint:(id)a0 error:(id *)a1;
- (id)VNEspressoModelImageprintOneDimensionMLMultiArrayWithDataType:(long long)a0 error:(id *)a1;
- (id)_VNEspressoModelImageprintMLMultiArrayWithDataType:(long long)a0 shape:(id)a1 strides:(id)a2 error:(id *)a3;
- (unsigned long long)_VNEspressoModelImageprintSerializedLength;
- (id)_initWithClassKeyMappedCoder:(id)a0;
- (id)computeDistance:(id)a0 withDistanceFunction:(unsigned long long)a1 error:(id *)a2;
- (char)hasEquivalentDescriptorToImageprint:(id)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 requestRevision:(unsigned long long)a5;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 requestRevision:(unsigned long long)a4;
- (id)initWithDescriptorData:(id)a0 elementType:(unsigned long long)a1 elementCount:(unsigned long long)a2 originatingRequestSpecifier:(id)a3;
- (char)isPrint:(id)a0 compatibleWithOtherPrint:(id)a1 error:(id *)a2;
- (id)labelsAndConfidence;
- (id)serializeStateAndReturnError:(id *)a0;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;

@end
