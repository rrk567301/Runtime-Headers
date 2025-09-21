@class NSArray, NSUUID, HMIFaceRecognition;

@interface HMITorsoAnnotation : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) HMIFaceRecognition *faceRecognition;
@property (readonly) NSArray *torsoprints;
@property (readonly) NSUUID *torsoModelVersion;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1 torsoModelVersion:(id)a2;

@end
