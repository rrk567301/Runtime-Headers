@class AVAsset, NSDictionary, NSError;

@interface MPCSonicAVItemAsset : NSObject {
    void /* unknown type, empty encoding */ sonicAVItem;
    void /* unknown type, empty encoding */ _storage;
}

@property (nonatomic, readonly) AVAsset *avAsset;
@property (nonatomic, readonly) BOOL isHLS;
@property (nonatomic, readonly) BOOL isEnhancedHLS;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSonicAVItem:(id)a0;
- (void)loadEnhancedHLSAudioFormatsWithCompletion:(void (^)(NSDictionary *, NSError *))a0;
- (void)prepareForRate:(float)a0 completion:(void (^)(NSError *))a1;

@end
