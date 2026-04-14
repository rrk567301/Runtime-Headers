@class NSNumber, LNExportedContentConfiguration;

@interface LNAsyncIteratorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNExportedContentConfiguration *exportConfiguration;
@property (readonly, copy, nonatomic) NSNumber *pageSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPageSize:(id)a0;

@end
