@interface JEAtomicObject : NSObject

@property (retain) id value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInitialValue:(id)a0;

@end
