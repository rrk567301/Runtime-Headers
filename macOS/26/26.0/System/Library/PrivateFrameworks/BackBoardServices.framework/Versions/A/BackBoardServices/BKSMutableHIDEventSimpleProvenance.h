@class NSData, NSString;

@interface BKSMutableHIDEventSimpleProvenance : BKSHIDEventSimpleProvenance <BSProtobufSerializable, NSSecureCoding, BSDescriptionStreaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *signature;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long versionedPID;
@property (nonatomic) unsigned int eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)setEventType:(unsigned int)a0;
- (void)setSignature:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setVersionedPID:(long long)a0;

@end
