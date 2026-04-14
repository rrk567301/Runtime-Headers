@class DDBridgeImageAsset, NSString;

@interface DDBridgeUpdateTexture : NSObject {
    void /* function */ identifier;
    void /* function */ hashString;
}

@property (nonatomic, readonly) DDBridgeImageAsset *imageAsset;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *hashString;

- (void).cxx_destruct;
- (id)init;
- (id)initWithImageAsset:(id)a0 identifier:(id)a1 hashString:(id)a2;

@end
