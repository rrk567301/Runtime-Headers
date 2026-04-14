@class NSArray, NSFormatter, NSView, NSProgressIndicator, _TtC12AMPDesktopUI24LibraryMovieHeaderLockup, NSTimer, _TtC12AMPDesktopUI30AMPSectionedEpisodeTableLockup;
@protocol TVShowDetailLockupModel;

@interface TVShowDetailLockup : NSTableCellView {
    BOOL _loadingState;
}

@property (retain, nonatomic) _TtC12AMPDesktopUI24LibraryMovieHeaderLockup *headerLockup;
@property (retain, nonatomic) _TtC12AMPDesktopUI30AMPSectionedEpisodeTableLockup *episodesLockup;
@property (retain, nonatomic) NSView *loadingContainer;
@property (retain, nonatomic) NSProgressIndicator *loadingIndicator;
@property (retain, nonatomic) NSTimer *loadingVisibilityTimer;
@property (nonatomic) BOOL loadingState;
@property (retain, nonatomic) id<TVShowDetailLockupModel> viewModel;
@property (retain, nonatomic) NSFormatter *durationFormatter;
@property (readonly, nonatomic) double titleVisualOffset;
@property (readonly, nonatomic) NSArray *selectedEpisodeModels;

+ (id)lockup;
+ (id)keyPathsForValuesAffectingModelIsLoading;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (BOOL)modelIsLoading;
- (id)wrapIntoScroller;

@end
