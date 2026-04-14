@class NSArray, NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetVersions : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_serialNumbers;
}

@property (readonly) NSArray *partnerSerialNumbers;

+ (id)tag;

- (id)description;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)decomposeUARP;

@end
