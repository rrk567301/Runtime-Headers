@class NSArray, AMPVideoDetailHeaderLockup, NSView, NSProgressIndicator, NSTimer, NSFormatter, _TtC12AMPDesktopUI30AMPSectionedEpisodeTableLockup;
@protocol TVShowDetailLockupModel;

@interface TVShowDetailLockup : NSTableCellView {
    BOOL _loadingState;
}

@property (retain, nonatomic) AMPVideoDetailHeaderLockup *headerLockup;
@property (retain, nonatomic) _TtC12AMPDesktopUI30AMPSectionedEpisodeTableLockup *episodesLockup;
@property (retain, nonatomic) NSView *loadingContainer;
@property (retain, nonatomic) NSProgressIndicator *loadingIndicator;
@property (retain, nonatomic) NSTimer *loadingVisibilityTimer;
@property (nonatomic) BOOL loadingState;
@property (retain, nonatomic) id<TVShowDetailLockupModel> viewModel;
@property (retain, nonatomic) NSFormatter *durationFormatter;
@property (readonly, nonatomic) double titleVisualOffset;
@property (nonatomic) double artworkAspect;
@property (retain, nonatomic) NSArray *selectedEpisodeModels;
@property (nonatomic) BOOL hideAccessories;

+ (id)lockup;

- (void)dealloc;
- (BOOL)isFlipped;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)clearViewModel;
- (id)wrapIntoScroller;

@end
