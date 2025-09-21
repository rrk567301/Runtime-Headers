@class NSNumber, LNExportedContentConfiguration;

@interface LNAsyncIteratorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) LNExportedContentConfiguration *exportConfiguration;
@property (readonly, copy, nonatomic) NSNumber *pageSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPageSize:(id)a0;

@end
