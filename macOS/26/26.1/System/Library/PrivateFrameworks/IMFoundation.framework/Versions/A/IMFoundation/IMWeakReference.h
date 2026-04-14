@interface IMWeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakRefWithObject:(id)a0;

- (id)object;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initRefWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyObject;

@end
