@interface NSAccessibilityWeakReferenceContainer : NSObject <NSCopying> {
    unsigned long long _hash;
    id _weakReference;
    id _danglingReference;
    BOOL _hasWeakReference;
}

@property (readonly, weak) id object;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
