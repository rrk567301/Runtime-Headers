@interface __NSConcreteUUID : NSUUID {
    unsigned char _uuidBytes[16];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)UUIDString;
- (long long)compare:(id)a0;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDString:(id)a0;

@end
