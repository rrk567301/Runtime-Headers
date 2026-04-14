@interface FilterNodeWrapper : NSObject <NSSecureCoding> {
    void *node;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapperWithFilterNode:(void *)a0;

- (void *)node;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithFilterNode:(void *)a0;

@end
