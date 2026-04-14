@interface AXBWeakReferenceContainer : NSObject <NSCopying> {
    id _weakReference;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithObject:(id)a0;
- (id)strongReference;
- (id)autoreleasedReference;

@end
