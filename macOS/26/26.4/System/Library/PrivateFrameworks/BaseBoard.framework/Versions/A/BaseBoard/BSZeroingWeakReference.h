@interface BSZeroingWeakReference : NSObject {
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

@property (readonly, weak, nonatomic) id object;

+ (id)referenceWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
