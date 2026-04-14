@class NSString;

@interface NSHTTPCookie2Key : NSObject <NSCopying> {
    NSString *_name;
    NSString *_domain;
    NSString *_path;
    NSString *_partition;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
