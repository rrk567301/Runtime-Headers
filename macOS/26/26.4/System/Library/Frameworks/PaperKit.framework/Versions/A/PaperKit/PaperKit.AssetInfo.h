@interface PaperKit.AssetInfo : NSObject {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ maxDimensionInPixels;
    void /* unknown type, empty encoding */ isHDRAllowed;
}

@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
