@interface PaperKit.AssetInfo : NSObject {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ maxDimensionInPixels;
    void /* unknown type, empty encoding */ actualMaxDimensionInPixels;
}

@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
