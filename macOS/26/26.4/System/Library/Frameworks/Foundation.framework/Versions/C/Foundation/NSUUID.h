@class NSString;

@interface NSUUID : NSObject <BSXPCSecureCoding, _OSXPCObjectRepresentable, _PASDistilledString, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
+ (id)_EX_UUIDWithBytes:(const char *)a0 size:(unsigned long long)a1;
+ (id)_EX_UUIDWithDigestBytes:(const void *)a0 size:(unsigned long long)a1;
+ (id)_EX_UUIDWithString:(id)a0;
+ (id)_EX_nullUUID;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)UUID;
+ (BOOL)_compatibilityBehavior;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)launchPersona;
- (id)uuid;
- (id)_OS_xpcObjectRepresentation;
- (id)_pas_revivedString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithUUIDString:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (struct __CFString { } *)_cfUUIDString;

@end
