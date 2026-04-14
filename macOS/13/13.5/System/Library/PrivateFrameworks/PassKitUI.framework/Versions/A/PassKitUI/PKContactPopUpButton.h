@class NSMenuItem;

@interface PKContactPopUpButton : NSPopUpButton

@property (retain, nonatomic) NSMenuItem *errorItem;
@property (nonatomic) BOOL hasError;

+ (Class)cellClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_notifySelectionWillChange:(id)a0;

@end
