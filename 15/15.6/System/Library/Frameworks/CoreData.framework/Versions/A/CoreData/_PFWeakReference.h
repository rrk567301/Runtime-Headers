@interface _PFWeakReference : NSObject {
    id _object;
    long long _objectAddress;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;

@end
