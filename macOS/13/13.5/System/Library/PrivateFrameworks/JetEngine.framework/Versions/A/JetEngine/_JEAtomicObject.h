@interface _JEAtomicObject : NSObject

@property (retain) id value;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInitialValue:(id)a0;

@end
