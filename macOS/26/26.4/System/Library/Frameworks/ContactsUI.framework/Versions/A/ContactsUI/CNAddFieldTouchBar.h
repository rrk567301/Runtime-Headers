@class NSArray, NSString, NSTouchBar, NSStackView;
@protocol CNAddFieldTouchBarDelegate;

@interface CNAddFieldTouchBar : NSObject <NSTouchBarProvider>

@property (weak) id<CNAddFieldTouchBarDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) NSStackView *stackView;
@property (retain) NSArray *addContactGroupButtons;
@property (retain) NSArray *addFieldButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abCardViewKeys;
+ (id)titlesForABCardViewKeys;

- (id)initWithDelegate:(id)a0;
- (void)addField:(id)a0;
- (void).cxx_destruct;
- (void)updateTouchBar;
- (id)addFieldPopoverItem;
- (id)createAddFieldTouchBarItem;
- (void)setupAddContactGroupButtons;
- (void)setupFields;

@end
