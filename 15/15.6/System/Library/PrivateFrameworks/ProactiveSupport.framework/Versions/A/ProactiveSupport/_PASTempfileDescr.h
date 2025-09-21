@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying>

@property (readonly, nonatomic) int fd;
@property (readonly, nonatomic) NSString *path;

+ (id)tempfileDescrWithFd:(int)a0 path:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFd:(int)a0 path:(id)a1;
- (char)isEqualToTempfileDescr:(id)a0;

@end
