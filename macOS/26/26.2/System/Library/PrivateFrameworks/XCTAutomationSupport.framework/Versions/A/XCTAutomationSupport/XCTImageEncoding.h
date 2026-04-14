@class NSString;

@interface XCTImageEncoding : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) double minimumCompression;
@property (class, readonly, nonatomic) double maximumCompression;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) double compressionQuality;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithUniformTypeIdentifier:(id)a0 compressionQuality:(double)a1;

@end
