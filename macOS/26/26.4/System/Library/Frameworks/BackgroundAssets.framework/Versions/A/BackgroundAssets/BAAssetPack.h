@class NSString, NSData;

@interface BAAssetPack : NSObject {
    void /* unknown type, empty encoding */ assetPackWrapper;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long downloadSize;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSData *userInfo;

- (id)init:(id)a0;
- (id)download;
- (void).cxx_destruct;
- (id)init;
- (id)downloadForContentRequest:(long long)a0;

@end
