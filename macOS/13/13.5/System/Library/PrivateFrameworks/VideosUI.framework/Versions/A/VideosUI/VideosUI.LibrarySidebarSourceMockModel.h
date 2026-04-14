@class NSString;

@interface VideosUI.LibrarySidebarSourceMockModel : NSObject <VUILibrarySidebarSourceModel> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (id)createDetailViewControllerWithSideBarItemIdentifier:(id)a0;
- (void)fetchGenresSideBarItemsWithCompletion:(id /* block */)a0;
- (void)fetchPlaylistSideBarItemsWithCompletion:(id /* block */)a0;
- (void)getVideosCountForSideBarItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
