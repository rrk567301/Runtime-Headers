@interface VideosUI.ContextMenuInteractor : NSObject <NSMenuDelegate> {
    void /* unknown type, empty encoding */ collectionViewModel;
    void /* unknown type, empty encoding */ originatorViewModel;
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ selectedViewModel;
    void /* unknown type, empty encoding */ documentController;
    void /* unknown type, empty encoding */ event;
    void /* unknown type, empty encoding */ itemViewModels;
    void /* unknown type, empty encoding */ menuSelectLocation;
    void /* unknown type, empty encoding */ shareActionDataSourceKey;
    void /* unknown type, empty encoding */ presentingView;
}

- (void)menuDidClose:(id)a0;
- (void)didSelectMenuItem:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
