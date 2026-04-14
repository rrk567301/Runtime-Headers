@class _TtC12AMPDesktopUI24LibraryMovieHeaderLockup, _TtC12AMPDesktopUI19AMPTrackTableLockup, NSFormatter;
@protocol AMPPlaylistDetailLockupModel;

@interface AMPPlaylistDetailLockup : NSTableCellView

@property (retain, nonatomic) _TtC12AMPDesktopUI24LibraryMovieHeaderLockup *headerLockup;
@property (retain, nonatomic) _TtC12AMPDesktopUI19AMPTrackTableLockup *tracksLockup;
@property (retain, nonatomic) id<AMPPlaylistDetailLockupModel> viewModel;
@property (retain, nonatomic) NSFormatter *durationFormatter;
@property (readonly, nonatomic) double titleVisualOffset;

+ (id)lockup;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFlipped;

@end
