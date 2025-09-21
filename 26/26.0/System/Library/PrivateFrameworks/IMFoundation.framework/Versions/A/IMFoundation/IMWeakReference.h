@interface IMWeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakRefWithObject:(id)a0;

- (id)copyObject;
- (id)object;
- (id)initRefWithObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
