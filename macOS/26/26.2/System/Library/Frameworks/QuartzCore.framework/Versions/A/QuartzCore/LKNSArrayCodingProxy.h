@class NSArray;

@interface LKNSArrayCodingProxy : CACodingProxy {
    NSArray *_array;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)decodedObject;
- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
