@class NSUUID, NSString, MPImageDescriptor_LegacySupportDoNotChange;

@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange {
    NSUUID *_identifier;
    MPImageDescriptor_LegacySupportDoNotChange *_imageprintDescriptor;
    NSString *_imageprintType;
    NSString *_imageprintVersion;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)serializedLength;
- (id)serializeAsVNImageprintStateAndReturnError:(id *)a0;

@end
