@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding> {
    unsigned char[49] *_matrix;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long sourceCount;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithSourceCount:(unsigned long long)a0;
- (void)enumerateElementsForSourceAtIndex:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (unsigned char)passRuleForElement:(long long)a0 forSourceAtIndex:(unsigned long long)a1;
- (void)setPassRule:(unsigned char)a0 forElement:(long long)a1 forSourceAtIndex:(unsigned long long)a2;

@end
