@interface _PFWeakReference : NSObject {
    id _object;
    long long _objectAddress;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
