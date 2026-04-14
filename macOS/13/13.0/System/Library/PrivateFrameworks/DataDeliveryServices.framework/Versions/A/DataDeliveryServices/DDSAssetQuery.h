@class NSString, DDSAttributeFilter, NSObject;
@protocol OS_dispatch_queue;

@interface DDSAssetQuery : NSObject <NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) DDSAttributeFilter *filter;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL localOnly;
@property (nonatomic) BOOL installedOnly;
@property (nonatomic) BOOL latestOnly;
@property (nonatomic) BOOL cachedOnly;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetType:(id)a0 filter:(id)a1;
- (void)invalidateDescription;
- (id)dumpDescription;
- (id)assetType:(id)a0;
- (id)initWithAssetType:(id)a0 filter:(id)a1 localOnly:(BOOL)a2 installedOnly:(BOOL)a3 latestOnly:(BOOL)a4 cachedOnly:(BOOL)a5;
- (BOOL)isEqualToAssetQuery:(id)a0;

@end
