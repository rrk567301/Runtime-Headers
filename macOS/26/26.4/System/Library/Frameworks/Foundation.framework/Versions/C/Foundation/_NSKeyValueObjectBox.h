@interface _NSKeyValueObjectBox : NSObject <NSCopying> {
    id _object;
    unsigned long long _objectPointer;
    Class _objectClass;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;

@end
