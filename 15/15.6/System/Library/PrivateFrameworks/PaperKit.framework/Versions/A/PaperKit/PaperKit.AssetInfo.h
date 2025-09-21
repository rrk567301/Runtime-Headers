@interface PaperKit.AssetInfo : NSObject {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ maxDimensionInPixels;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
