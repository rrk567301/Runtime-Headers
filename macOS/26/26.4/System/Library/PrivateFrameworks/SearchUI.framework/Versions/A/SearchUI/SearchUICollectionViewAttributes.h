@class TLKAppearance, SearchUICommandEnvironment;
@protocol SearchUIScrollButtonDelegate, SearchUIHeaderDelegate;

@interface SearchUICollectionViewAttributes : NSObject

@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL inPreviewPlatter;
@property (nonatomic) BOOL hasFooter;
@property (nonatomic) BOOL isAboveFilterBar;
@property (nonatomic) BOOL isBelowVisibleFilterBar;
@property (nonatomic) BOOL selectionShouldFillWidth;
@property (nonatomic) BOOL disableEmphasizedSelection;
@property (retain, nonatomic) TLKAppearance *appearance;
@property (retain) SearchUICommandEnvironment *commandEnvironment;
@property (weak, nonatomic) id<SearchUIHeaderDelegate> headerDelegate;
@property (weak, nonatomic) id<SearchUIScrollButtonDelegate> scrollButtonDelegate;

- (void).cxx_destruct;

@end
