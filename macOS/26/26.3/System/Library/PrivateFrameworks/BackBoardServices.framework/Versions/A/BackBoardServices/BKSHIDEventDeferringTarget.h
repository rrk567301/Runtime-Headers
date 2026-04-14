@class NSString, BKSHIDEventDeferringToken;

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)build:(id /* block */)a0;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)_initWithPID:(int)a0 token:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
