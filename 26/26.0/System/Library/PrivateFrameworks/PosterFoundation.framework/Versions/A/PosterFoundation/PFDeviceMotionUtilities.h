@interface PFDeviceMotionUtilities : NSObject

+ (id)descriptionForRotation:(union { struct { } x0; struct { } x1; })a0;
+ (union { struct { } x0; struct { } x1; })rotationFromSerializedRepresentation:(id)a0;
+ (id)serializedRepresentationFromRotation:(union { struct { } x0; struct { } x1; })a0;

@end
