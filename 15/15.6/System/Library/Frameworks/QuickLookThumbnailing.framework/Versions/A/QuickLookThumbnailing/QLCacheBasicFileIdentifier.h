@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long fileId;
@property (readonly) struct fsid { int val[2]; } fsid;

+ (Class)versionedFileIdentifierClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)initWithFileId:(unsigned long long)a0 fsid:(struct fsid { int x0[2]; })a1;

@end
