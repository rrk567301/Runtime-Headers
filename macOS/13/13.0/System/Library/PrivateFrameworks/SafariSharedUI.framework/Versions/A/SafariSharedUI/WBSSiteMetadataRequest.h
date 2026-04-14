@class NSURL, NSDictionary;

@interface WBSSiteMetadataRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;

@end
