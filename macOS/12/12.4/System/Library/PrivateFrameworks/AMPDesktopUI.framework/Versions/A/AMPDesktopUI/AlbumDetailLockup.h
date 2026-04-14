@class _TtC12AMPDesktopUI17AlbumHeaderLockup, _TtC12AMPDesktopUI21TracklistFooterLockup, _TtC12AMPDesktopUI16TrackTableLockup;
@protocol AlbumDetailLockupModel;

@interface AlbumDetailLockup : NSTableCellView

@property (weak, nonatomic) _TtC12AMPDesktopUI17AlbumHeaderLockup *header;
@property (weak, nonatomic) _TtC12AMPDesktopUI16TrackTableLockup *trackTable;
@property (weak, nonatomic) _TtC12AMPDesktopUI21TracklistFooterLockup *footer;
@property (retain, nonatomic) id<AlbumDetailLockupModel> viewModel;

+ (id)lockup;

- (id)init;
- (void).cxx_destruct;

@end
