@class NSString;

@interface PFFairPlayAsset : NSObject {
    void /* unknown type, empty encoding */ adamID;
    void /* unknown type, empty encoding */ avAsset;
    void /* unknown type, empty encoding */ keyStore;
}

@property (nonatomic, readonly) BOOL isOfflineAsset;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAdamID:(long long)a0 avAsset:(id)a1;

@end
