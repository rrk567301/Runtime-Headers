@class ICSearchResultRegexMatchFinder, ICAttachmentView;
@protocol NSTextLocation;

@interface ICTK2TextAttachmentViewProvider : NSTextAttachmentViewProvider

@property (readonly, nonatomic) ICAttachmentView *attachmentViewIfLoaded;
@property (nonatomic) BOOL viewLoaded;
@property (retain, nonatomic) id<NSTextLocation> updatedLocationForRecycledViewProvider;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;

- (id)location;
- (void)setLocation:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;

@end
