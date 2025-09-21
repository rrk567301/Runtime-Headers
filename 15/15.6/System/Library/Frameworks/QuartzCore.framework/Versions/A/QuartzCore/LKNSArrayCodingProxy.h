@class NSArray;

@interface LKNSArrayCodingProxy : CACodingProxy {
    NSArray *_array;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)decodedObject;

@end
