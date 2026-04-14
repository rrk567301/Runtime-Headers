@class NSArray;

@interface LNContentTypeMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *exportableTypes;
@property (readonly, copy, nonatomic) NSArray *importableTypes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExportableTypes:(id)a0 importableTypes:(id)a1;

@end
