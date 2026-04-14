@class NSString;

@interface XCTImageEncoding : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) double minimumCompression;
@property (class, readonly, nonatomic) double maximumCompression;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) double compressionQuality;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithUniformTypeIdentifier:(id)a0 compressionQuality:(double)a1;

@end
