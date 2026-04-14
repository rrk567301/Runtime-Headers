@interface AXBWeakReferenceContainer : NSObject <NSCopying> {
    id _weakReference;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)strongReference;
- (id)autoreleasedReference;

@end
