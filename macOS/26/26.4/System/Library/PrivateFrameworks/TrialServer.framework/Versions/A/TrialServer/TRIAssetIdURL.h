@class NSString, NSURL;
@protocol TRIAssetId;

@interface TRIAssetIdURL : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) NSURL *url;

+ (id)urlWithAssetId:(id)a0 url:(id)a1;

- (id)copyWithReplacementAssetId:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)copyWithReplacementUrl:(id)a0;
- (id)initWithAssetId:(id)a0 url:(id)a1;
- (BOOL)isEqualTourl:(id)a0;

@end
