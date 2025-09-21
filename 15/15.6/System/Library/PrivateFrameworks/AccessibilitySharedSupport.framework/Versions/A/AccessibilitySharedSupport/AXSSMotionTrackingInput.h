@class NSString, NSDictionary;

@interface AXSSMotionTrackingInput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;
@property (readonly, nonatomic) char isHIDDevice;
@property (readonly, nonatomic) char isCamera;
@property (readonly, nonatomic) char isVideoFile;
@property (readonly, nonatomic) char supportsExpressions;
@property (readonly, nonatomic) char supportsLookAtPoint;
@property (readonly, nonatomic) unsigned long long trackingType;

+ (id)motionTrackingInputFromPlistDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (char)isEqualToMotionTrackingInput:(id)a0;

@end
