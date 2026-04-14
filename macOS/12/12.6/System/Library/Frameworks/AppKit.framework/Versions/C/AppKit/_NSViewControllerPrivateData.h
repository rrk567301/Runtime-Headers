@class NSArray, NSViewController, NSDictionary, NSString, NSMutableArray, NSStoryboard;

@interface _NSViewControllerPrivateData : NSObject {
    struct { unsigned char preventInsertAndRemoveChildViewControllersFromSendingKVO : 1; unsigned char _sentViewWillAppear : 1; unsigned char _sentViewWillDisappear : 1; unsigned char _sentViewDidLoad : 1; unsigned char _scheduledBridgedServiceLayoutPropertyChange : 1; unsigned int _reserved : 27; } _flags;
}

@property NSViewController *parentViewController;
@property (retain) NSMutableArray *childViewControllers;
@property (retain) NSMutableArray *presentedViewControllers;
@property struct _NSModalSession { id x0; id x1; struct _NSModalSession *x2; int x3; BOOL x4; long long x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; short x10; long long x11; id x12; id x13; SEL x14; void *x15; long long x16; id x17; id /* block */ x18; id x19; BOOL x20; } *modalSessionForPresentedViewController;
@property long long appearanceTransitionCount;
@property (retain) NSArray *segueTemplates;
@property (retain) NSStoryboard *storyboard;
@property (retain) NSDictionary *segueDestinationOptions;
@property (retain) NSDictionary *externalObjectEntryTableForViewLoading;
@property (retain) NSArray *topLevelObjectsToKeepAliveFromStoryboard;
@property (copy) NSString *identifier;
@property (copy) id /* block */ constrainServiceScreenFrameBlock;

- (void)dealloc;

@end
