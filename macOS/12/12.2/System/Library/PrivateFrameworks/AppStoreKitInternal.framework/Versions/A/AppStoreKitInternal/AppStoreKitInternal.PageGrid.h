@class NSString;

@interface AppStoreKitInternal.PageGrid : NSObject <JetUI.JetTraitEnvironment> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ containerWidth;
    void /* unknown type, empty encoding */ containerHeight;
    void /* unknown type, empty encoding */ safeAreaInsets;
    void /* unknown type, empty encoding */ activeBreakPoint;
    void /* unknown type, empty encoding */ breakpoints;
    void /* unknown type, empty encoding */ requiresAdditionalSafeAreaMargins;
    void /* unknown type, empty encoding */ columnCount;
    void /* unknown type, empty encoding */ columnWidth;
    void /* unknown type, empty encoding */ largestPossibleColumnWidth;
    void /* unknown type, empty encoding */ interColumnSpace;
    void /* unknown type, empty encoding */ interRowSpace;
    void /* unknown type, empty encoding */ horizontalMargins;
    void /* unknown type, empty encoding */ horizontalDirectionalMargins;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ jet_traitCollection;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
