@class NSURL, NSString;

@interface CCDataSite : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, nonatomic) NSURL *dataSiteURL;
@property (readonly, nonatomic) int dataProtectionClass;

+ (id)defaultDataSiteWithRootDirectoryURL:(id)a0 create:(BOOL)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)remove:(id *)a0;
- (id)dataResourceForSet:(id)a0;
- (BOOL)enumerateDataResources:(id *)a0 setIdentifier:(id)a1 descriptors:(id)a2 includingTombstoned:(BOOL)a3 usingBlock:(id /* block */)a4;
- (id)initWithDataSiteURL:(id)a0 create:(BOOL)a1 error:(id *)a2;
- (BOOL)isEqualToDataSite:(id)a0;
- (BOOL)isEquivalentDataSiteURL:(id)a0;

@end
