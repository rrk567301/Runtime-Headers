@interface _PFWeakReference : NSObject {
    id _object;
    long long _objectAddress;
}

- (unsigned long long)hash;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
