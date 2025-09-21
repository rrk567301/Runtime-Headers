@class NSCustomTouchBarItem, NSString, CNAddFieldTouchBar, NSTouchBar, NSPopoverTouchBarItem;
@protocol CNContactEditViewTouchBarDelegate;

@interface CNContactEditViewTouchBar : NSObject <CNAddFieldTouchBarDelegate, NSTouchBarProvider>

@property (weak) id<CNContactEditViewTouchBarDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) NSPopoverTouchBarItem *addFieldPopoverItem;
@property (retain) NSCustomTouchBarItem *doneButtonTouchBarItem;
@property (retain) CNAddFieldTouchBar *addFieldTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)addField:(id)a0;
- (void).cxx_destruct;
- (void)addContact;
- (void)addGroup;
- (BOOL)canAddContactOrGroup;
- (BOOL)canAddField;

@end
