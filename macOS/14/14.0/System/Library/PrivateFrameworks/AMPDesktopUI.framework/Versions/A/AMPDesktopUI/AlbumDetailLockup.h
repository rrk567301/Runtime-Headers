@class _TtC12AMPDesktopUI21TracklistFooterLockup, _TtC12AMPDesktopUI19AMPTrackTableLockup, AMPAlbumHeaderLockup;
@protocol AlbumDetailLockupModel;

@interface AlbumDetailLockup : NSTableCellView

@property (weak, nonatomic) AMPAlbumHeaderLockup *header;
@property (weak, nonatomic) _TtC12AMPDesktopUI19AMPTrackTableLockup *trackTable;
@property (weak, nonatomic) _TtC12AMPDesktopUI21TracklistFooterLockup *footer;
@property (retain, nonatomic) id<AlbumDetailLockupModel> viewModel;

+ (id)lockup;

- (id)init;
- (void).cxx_destruct;

@end
