@class NSString, NSURL;
@protocol TRIAssetId;

@interface TRIAssetIdURL : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) NSURL *url;

+ (id)urlWithAssetId:(id)a0 url:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementAssetId:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementUrl:(id)a0;
- (id)initWithAssetId:(id)a0 url:(id)a1;
- (BOOL)isEqualTourl:(id)a0;

@end
