@class TLKAppearance, SearchUICommandEnvironment;
@protocol SearchUIHeaderDelegate;

@interface SearchUICollectionViewAttributes : NSObject

@property (nonatomic) char shouldUseInsetRoundedSections;
@property (nonatomic) char inPreviewPlatter;
@property (nonatomic) char hasFooter;
@property (nonatomic) char selectionShouldFillWidth;
@property (nonatomic) char disableEmphasizedSelection;
@property (retain, nonatomic) TLKAppearance *appearance;
@property (retain) SearchUICommandEnvironment *commandEnvironment;
@property (weak, nonatomic) id<SearchUIHeaderDelegate> headerDelegate;

- (void).cxx_destruct;

@end
