@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding, NSSecureCoding> {
    id *_attributes;
    id _attributesAsEncoded;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (id)valueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithValues:(id *)a0 objectID:(id)a1;

@end
