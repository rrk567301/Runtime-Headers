@class TSWPPadding, TSULocale;
@protocol TSWPStyleProviding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {
    TSWPPadding *mPadding;
    int mVerticalAlignment;
}

@property (nonatomic) double maxWidthForChildren;
@property (weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) TSWPPadding *padding;
@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) char shouldHyphenate;
@property (readonly, nonatomic) char forceWesternLineBreaking;

- (void).cxx_destruct;
- (id)initWithPadding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 verticalAlignment:(int)a1 locale:(id)a2 shouldHyphenate:(char)a3 styleProvidingSource:(id)a4;

@end
