@interface VN6Ac6Cyl5O5oK19HboyMBR : VNEspressoModelImageprint

@property unsigned long long imageSignatureprintType;

+ (char)supportsSecureCoding;
+ (id)currentVersion;
+ (char)_signaturePrintTypeSupported:(unsigned long long)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (unsigned long long)serializationMagicNumber;
+ (char)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 error:(id *)a1;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 imageSignatureprintType:(unsigned long long)a4 originatingRequestSpecifier:(id)a5;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 imageSignatureprintType:(unsigned long long)a4 requestRevision:(unsigned long long)a5;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)serializedLength;

@end
