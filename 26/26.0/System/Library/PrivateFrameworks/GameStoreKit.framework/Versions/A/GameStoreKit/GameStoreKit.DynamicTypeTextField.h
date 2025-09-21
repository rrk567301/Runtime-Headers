@class NSFont;

@interface GameStoreKit.DynamicTypeTextField : NSTextField {
    void /* unknown type, empty encoding */ fontUseCaseContentSizeCategory;
    void /* unknown type, empty encoding */ contentSizeCategoryMapping;
    void /* unknown type, empty encoding */ fontUseCase;
    void /* unknown type, empty encoding */ _allowsVibrancy;
    void /* unknown type, empty encoding */ directionalTextAlignment;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, retain) NSFont *font;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic) long long alignment;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
