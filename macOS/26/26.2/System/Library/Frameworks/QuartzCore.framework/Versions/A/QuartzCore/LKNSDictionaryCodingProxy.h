@class NSDictionary;

@interface LKNSDictionaryCodingProxy : CACodingProxy {
    NSDictionary *_dict;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)decodedObject;
- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
