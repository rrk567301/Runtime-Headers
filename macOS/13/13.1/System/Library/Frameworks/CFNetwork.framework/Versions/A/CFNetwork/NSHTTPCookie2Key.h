@class NSString;

@interface NSHTTPCookie2Key : NSObject <NSCopying> {
    NSString *_name;
    NSString *_domain;
    NSString *_path;
    NSString *_partition;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
