@interface PaperKit.AssetInfo : NSObject {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ maxDimensionInPixels;
    void /* unknown type, empty encoding */ isHDRAllowed;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
