@class NSString;

@interface _GroupActivities_AppKit.GroupActivitySharingController : NSViewController {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ _resultValue;
}

@property (nonatomic, copy) NSString *shareSheetSessionID;
@property (nonatomic) BOOL startStagedActivity;

- (void)registerWithResultHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)initWithItemProvider:(id)a0;

@end
