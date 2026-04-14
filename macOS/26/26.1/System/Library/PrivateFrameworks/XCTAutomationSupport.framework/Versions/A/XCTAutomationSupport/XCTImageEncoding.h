@class NSString;

@interface XCTImageEncoding : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) double minimumCompression;
@property (class, readonly, nonatomic) double maximumCompression;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) double compressionQuality;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUniformTypeIdentifier:(id)a0 compressionQuality:(double)a1;

@end
