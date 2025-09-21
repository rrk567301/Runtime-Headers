@class _SWCollaborationButtonView, NSItemProvider, SWHighlight;

@interface _SWCollaborationToolbarItem : NSToolbarItem

@property (nonatomic, retain) SWHighlight *collaborationHighlight;
@property (nonatomic, getter=isContentShared) char contentShared;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButtonView;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (nonatomic) unsigned long long activeParticipantCount;
@property (nonatomic) char isContentShared;

- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0;
- (id)initWithHighlight:(id)a0;
- (void)setDetailViewListContent:(id)a0;
- (void)setShowManageButton:(char)a0;
- (void)setManageButtonTitle:(id)a0;
- (void)dismissPopoverAnimated:(char)a0 completion:(id /* block */)a1;
- (id)initWithCollaborationButtonView:(id)a0;
- (id)initWithHighlight:(id)a0 detailViewListContent:(id)a1;

@end
