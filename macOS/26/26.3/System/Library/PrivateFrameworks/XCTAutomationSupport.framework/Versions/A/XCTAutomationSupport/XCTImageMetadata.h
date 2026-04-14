@class NSString;

@interface XCTImageMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double scale;
@property (copy, nonatomic) NSString *name;

- (id)initWithScale:(double)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithScale:(double)a0 name:(id)a1;

@end
