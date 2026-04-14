@interface AXBWeakReferenceContainer : NSObject <NSCopying> {
    id _weakReference;
}

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)strongReference;
- (id)autoreleasedReference;

@end
