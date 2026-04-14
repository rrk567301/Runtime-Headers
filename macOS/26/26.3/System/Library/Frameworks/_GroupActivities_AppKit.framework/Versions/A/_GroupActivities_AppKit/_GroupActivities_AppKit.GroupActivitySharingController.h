@class NSString;

@interface _GroupActivities_AppKit.GroupActivitySharingController : NSViewController {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ _resultValue;
    void /* unknown type, empty encoding */ resultSubscribers;
}

@property (nonatomic, copy) NSString *shareSheetSessionID;
@property (nonatomic) BOOL startStagedActivity;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillAppear;
- (id)initWithItemProvider:(id)a0;
- (void)registerWithResultHandler:(id /* block */)a0;

@end
