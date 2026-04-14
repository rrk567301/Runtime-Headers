@class NSObject;
@protocol VUIGroupActivitiesManagerDelegate, VUIOpenURLHandling, VUIDocumentCreator;

@interface VUIInterfaceFactory : NSObject {
    struct { BOOL respondsToViewControllerCreation; } _documentCreatorFlags;
}

@property (retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator;
@property (retain, nonatomic) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager;
@property (retain, nonatomic) NSObject<VUIOpenURLHandling> *openURLHandler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
- (id)rootTabBarViewController;

@end
