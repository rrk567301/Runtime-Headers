@class NSString, BKSHIDEventDeferringToken;

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)_initWithPID:(int)a0 token:(id)a1;

@end
