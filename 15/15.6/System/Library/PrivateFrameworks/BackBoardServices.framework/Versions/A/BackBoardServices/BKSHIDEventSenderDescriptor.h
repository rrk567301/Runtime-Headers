@class BKSHIDEventDisplay, NSString;

@interface BKSHIDEventSenderDescriptor : NSObject <BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long hardwareType;
@property (readonly, nonatomic) BKSHIDEventDisplay *associatedDisplay;
@property (readonly, nonatomic, getter=isAuthenticated) char authenticated;
@property (readonly, nonatomic) unsigned int primaryPage;
@property (readonly, nonatomic) unsigned int primaryUsage;
@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)build:(id /* block */)a0;
+ (id)protobufSchema;
+ (id)anyBuiltinTouchscreenDigitizer;
+ (id)anyDigitizer;
+ (id)stylusOpaqueTouchDigitizer;
+ (id)wildcard;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)_initWithHardwareType:(long long)a0 associatedDisplay:(id)a1 authenticated:(char)a2 primaryPage:(unsigned int)a3 primaryUsage:(unsigned int)a4 senderID:(unsigned long long)a5;
- (id)initFromPropertyList:(id)a0;
- (char)matchesDescriptor:(id)a0 failureReason:(id *)a1;
- (id)propertyListEncoded;

@end
