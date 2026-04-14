@class NSString, VNResourceVersion;

@interface _VNDetectorDescriptorIdentifierVersionTuple : NSObject {
    NSString *_descriptorIdentifier;
    Class _detectorClass;
    VNResourceVersion *_descriptorVersion;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
