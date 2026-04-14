@interface _NSKeyValueObjectBox : NSObject <NSCopying> {
    id _object;
    unsigned long long _objectPointer;
    Class _objectClass;
}

- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
