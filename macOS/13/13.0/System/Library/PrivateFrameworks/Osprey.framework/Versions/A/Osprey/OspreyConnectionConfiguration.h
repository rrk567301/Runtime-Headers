@class NSURL, NSURLSessionConfiguration;

@interface OspreyConnectionConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *connectionUrl;
@property (retain, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
