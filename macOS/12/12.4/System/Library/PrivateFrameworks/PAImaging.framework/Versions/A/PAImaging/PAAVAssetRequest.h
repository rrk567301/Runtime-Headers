@class PHAsset, NSURL, NSArray;
@protocol PFCanceler, PAAVAssetRequestService;

@interface PAAVAssetRequest : NSObject <NSCopying>

@property (retain) id<PAAVAssetRequestService> requestService;
@property (retain) PHAsset *asset;
@property (retain) id<PFCanceler> canceler;
@property (retain) NSURL *assetURL;
@property (retain) NSArray *keysToLoadAndTest;

+ (id)defaultRequestService;
+ (void)setDefaultRequestService:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (id)submitSynchronous;
- (BOOL)validateIntoArray:(id)a0;

@end
