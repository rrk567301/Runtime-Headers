@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSSecureCoding> {
    struct _filesec { } *_filesec;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)__new:(struct _filesec { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (struct _filesec { } *)_filesec;
- (char)clearProperties:(unsigned long long)a0;
- (char)copyAccessControlList:(struct _acl **)a0;
- (void)encodeWithCoder:(id)a0;
- (char)getGroup:(unsigned int *)a0;
- (char)getGroupUUID:(unsigned char[16] *)a0;
- (char)getMode:(unsigned short *)a0;
- (char)getOwner:(unsigned int *)a0;
- (char)getOwnerUUID:(unsigned char[16] *)a0;
- (id)initWithCoder:(id)a0;
- (char)setAccessControlList:(struct _acl { } *)a0;
- (char)setGroup:(unsigned int)a0;
- (char)setGroupUUID:(unsigned char[16])a0;
- (char)setMode:(unsigned short)a0;
- (char)setOwner:(unsigned int)a0;
- (char)setOwnerUUID:(unsigned char[16])a0;

@end
