@class NSData, NSString;

@interface BKSHIDEventSimpleProvenance : NSObject <BSProtobufSerializable, NSSecureCoding, BSDescriptionStreaming, NSCopying, NSMutableCopying, BKSHIDEventProvenance> {
    NSData *_signature;
    long long _versionedPID;
    unsigned int _eventType;
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) unsigned int eventType;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)protobufSchema;
+ (id)build:(id /* block */)a0;
+ (id)_withInternalKey:(id)a0 buildMessage:(id /* block */)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_verifySignatureWithInternalKey:(id)a0;

@end
