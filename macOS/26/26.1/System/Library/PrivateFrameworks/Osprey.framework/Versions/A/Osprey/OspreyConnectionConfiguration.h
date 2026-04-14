@class NSURL, NSURLSessionConfiguration;

@interface OspreyConnectionConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *connectionUrl;
@property (retain, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
