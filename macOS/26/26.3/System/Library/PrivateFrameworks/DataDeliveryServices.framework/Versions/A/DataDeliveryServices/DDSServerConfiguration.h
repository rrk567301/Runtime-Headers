@class NSString, NSURL;

@interface DDSServerConfiguration : NSObject <NSCopying>

@property (readonly, copy) NSString *xpcServiceName;
@property (readonly, copy) NSURL *assertionStorageDirectoryURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithXPCServiceName:(id)a0 assertionStorageDirectoryURL:(id)a1;

@end
