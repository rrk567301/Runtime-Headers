@interface BSZeroingWeakReference : NSObject {
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

@property (readonly, weak, nonatomic) id object;

+ (id)referenceWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
