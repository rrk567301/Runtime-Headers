@interface PaperKit.AssetInfo : NSObject {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ maxDimensionInPixels;
    void /* unknown type, empty encoding */ isHDRAllowed;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
