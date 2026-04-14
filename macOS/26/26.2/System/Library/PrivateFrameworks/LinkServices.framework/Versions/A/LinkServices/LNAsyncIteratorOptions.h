@class NSNumber, LNExportedContentConfiguration;

@interface LNAsyncIteratorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNExportedContentConfiguration *exportConfiguration;
@property (readonly, copy, nonatomic) NSNumber *pageSize;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPageSize:(id)a0;

@end
