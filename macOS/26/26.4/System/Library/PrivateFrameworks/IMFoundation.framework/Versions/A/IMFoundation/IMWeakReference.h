@interface IMWeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakRefWithObject:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)object;
- (void).cxx_destruct;
- (id)copyObject;
- (unsigned long long)hash;
- (id)initRefWithObject:(id)a0;

@end
