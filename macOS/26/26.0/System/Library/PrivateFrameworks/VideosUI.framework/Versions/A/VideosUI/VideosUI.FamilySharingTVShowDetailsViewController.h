@class NSArray, NSString, NSMenu, NSAttributedString, VUIDownloadButtonViewModel;

@interface VideosUI.FamilySharingTVShowDetailsViewController : VUIBaseViewController <TVShowDetailLockupModel, AMPFilterableViewModel> {
    void /* unknown type, empty encoding */ showMediaEntity;
    void /* unknown type, empty encoding */ ownerId;
    void /* unknown type, empty encoding */ lockup;
    void /* unknown type, empty encoding */ currentFilteringTerm;
    void /* unknown type, empty encoding */ imageDownloader;
    void /* unknown type, empty encoding */ familySharingSource;
    void /* function */ sections;
    void /* unknown type, empty encoding */ unfilteredSections;
    void /* function */ subtitleLinkUUID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionMenu;
    void /* unknown type, empty encoding */ scrollObserver;
    void /* function */ filterString;
    void /* function */ filterStatusString;
}

@property (nonatomic, retain) VUIDownloadButtonViewModel *downloadViewModel;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic) BOOL showFilterBarBackground;
@property (nonatomic, readonly) unsigned long long badges;
@property (nonatomic, readonly) NSAttributedString *contentRatingString;
@property (nonatomic) SEL extrasButtonAction;
@property (nonatomic, copy) NSString *productTitle;
@property (nonatomic) BOOL titleIsEditable;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitleLinkUUID;
@property (nonatomic, readonly) NSString *callout;
@property (nonatomic) long long rating;
@property (nonatomic) unsigned long long downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic) unsigned long long playButtonState;
@property (nonatomic) SEL playPauseStopAction;
@property (nonatomic) SEL downloadAction;
@property (nonatomic, retain) NSMenu *actionMenu;
@property (nonatomic) BOOL filteringIsEnabled;
@property (nonatomic, copy) NSString *filterString;
@property (nonatomic, copy) NSString *filterStatusString;
@property (nonatomic) BOOL showDownloadedSongsMessage;

+ (id)keyPathsForValuesAffectingSubtitle;

- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)doDownloadAction;
- (id)actionMenuForEpisodes:(id)a0;
- (void)doShowAllSongs;
- (void)requestArtworkAtSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)doPlayPauseStop;
- (void)vui_viewDidLoad;
- (void)doDownloadMenuAction:(id)a0;
- (void)doRemoveDownloadsMenuAction:(id)a0;

@end
