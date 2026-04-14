@class NSData;

@interface CHEncodedStrokeIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _savedHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *encodedStrokeIdentifier;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
