@class NSUUID, NSString, MPImageDescriptor_LegacySupportDoNotChange;

@interface VNCVMLImageprintObservation_LegacySupportDoNotChange : VNCVMLObservation_LegacySupportDoNotChange {
    NSUUID *_identifier;
    MPImageDescriptor_LegacySupportDoNotChange *_imageprintDescriptor;
    NSString *_imageprintType;
    NSString *_imageprintVersion;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serializeAsVNImageprintStateAndReturnError:(id *)a0;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)serializedLength;

@end
