@class NSViewController, NSObject;
@protocol VUIDocumentCreator, VUIControllerPresenter, VUIOpenURLHandling, VUITabBarProtocol, VUIGroupActivitiesManagerDelegate, VUILanguageAwareStringHandling;

@interface VUIInterfaceFactory : NSObject {
    struct { BOOL respondsToViewControllerCreation; } _documentCreatorFlags;
}

@property (retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator;
@property (retain, nonatomic) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager;
@property (retain, nonatomic) NSObject<VUIOpenURLHandling> *openURLHandler;
@property (retain, nonatomic) NSObject<VUIControllerPresenter> *controllerPresenter;
@property (retain, nonatomic) NSObject<VUIControllerPresenter> *welcomeScreenControllerPresenter;
@property (retain, nonatomic) NSObject<VUITabBarProtocol> *tabBarController;
@property (retain, nonatomic) NSViewController *rootPresentingViewController;
@property (retain, nonatomic) NSObject<VUILanguageAwareStringHandling> *languageStringHandler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1;

@end
