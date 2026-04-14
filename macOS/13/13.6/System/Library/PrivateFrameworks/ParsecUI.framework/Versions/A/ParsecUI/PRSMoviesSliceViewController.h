@class NSArray, NSTextContainer, NSTextStorage, NSLayoutManager;

@interface PRSMoviesSliceViewController : PRSSliceViewController

@property (retain) NSTextStorage *textStorageForLayout;
@property (retain) NSLayoutManager *layoutManagerForLayout;
@property (retain) NSTextContainer *textContainerForLayout;
@property (readonly) NSArray *movies;

- (void).cxx_destruct;
- (double)height;
- (unsigned long long)columnCount;
- (void)awakeFromNib;
- (id)moviesSliceView;
- (void)_makeTextObjectsForLayout;
- (void)_sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (unsigned long long)characterIndexOfBreakInString:(id)a0 atOrBeforeCharacterIndex:(unsigned long long)a1;
- (unsigned long long)characterIndexToTruncateAttrString:(id)a0 width:(double)a1 maxLines:(unsigned long long)a2;
- (id)fullSubtitleAttributedStringForMovie:(id)a0 view:(id)a1;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (id)initWithMovies:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 forCardSection:(id)a2;
- (void)openMovie:(id)a0;
- (void)openMovieError;
- (id)posterImageViewAtIndex:(unsigned long long)a0;
- (id)subtitleTextViewAtIndex:(unsigned long long)a0;
- (id)subtitleTextViewMinHeightConstraintAtIndex:(unsigned long long)a0;
- (void)syncAttributes;
- (id)titleTextFieldAtIndex:(unsigned long long)a0;
- (id)truncateAttrString:(id)a0 width:(double)a1 maxLines:(unsigned long long)a2;

@end
