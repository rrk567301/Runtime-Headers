@class NSString, NSData;

@interface NSUUID : NSObject <BSXPCSecureCoding, _OSXPCObjectRepresentable, _PASDistilledString, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSData *ak_uuidData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *UUIDString;

+ (id)_LS_UUIDWithData:(id)a0 digestType:(long long)a1;
+ (id)_LS_nullUUID;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)bm_bootSessionUUID;
+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_compatibilityBehavior;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)uuid;
- (id)launchPersona;
- (id)_OS_xpcObjectRepresentation;
- (id)_pas_revivedString;
- (id)initWithUUIDString:(id)a0;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (BOOL)isEqual:(id)a0;
- (struct __CFString { } *)_cfUUIDString;

@end
