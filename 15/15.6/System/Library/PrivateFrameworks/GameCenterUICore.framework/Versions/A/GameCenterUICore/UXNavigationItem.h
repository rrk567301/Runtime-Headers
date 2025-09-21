@class NSString, NSView;

@interface UXNavigationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSView *titleView;
@property (retain, nonatomic) NSView *leftBarButtonView;
@property (retain, nonatomic) NSView *rightBarButtonView;
@property (retain, nonatomic) NSView *innerLeftBarButtonView;
@property (retain, nonatomic) NSView *innerRightBarButtonView;
@property (nonatomic) int cancelButtonLocation;
@property char spinnerEnabled;
@property char allowRearangement;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)titleTextAttributes;

- (id)description;
- (void).cxx_destruct;
- (char)cancel;
- (id)cancelButton;

@end
