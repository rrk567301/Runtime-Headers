@class NSMenuItem;

@interface PKContactPopUpButton : NSPopUpButton

@property (retain, nonatomic) NSMenuItem *errorItem;
@property (nonatomic) BOOL hasError;

+ (Class)cellClass;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_notifySelectionWillChange:(id)a0;

@end
