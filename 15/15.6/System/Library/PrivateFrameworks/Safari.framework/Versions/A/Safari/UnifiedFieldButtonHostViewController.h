@class NSString, NSButton;
@protocol UnifiedFieldButtonHostViewControllerDelegate, AccordionHostableExpansionRequestHandler;

@interface UnifiedFieldButtonHostViewController : NSViewController <AccordionHostable> {
    NSButton *_expandedButton;
    NSButton *_collapsedButton;
}

@property (weak, nonatomic) id<UnifiedFieldButtonHostViewControllerDelegate> delegate;
@property (nonatomic) char enabled;
@property (weak, nonatomic) id<AccordionHostableExpansionRequestHandler> expansionRequestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)accordionHost:(id)a0 viewWillCollapse:(char)a1;
- (void)_updateExpandedButtonHidden:(char)a0 animated:(char)a1;
- (void)accordionHost:(id)a0 viewWasInserted:(char)a1 viewDidExpand:(char)a2;
- (void)accordionHost:(id)a0 viewWillBeInserted:(char)a1 viewWillExpand:(char)a2;
- (void)accordionHost:(id)a0 viewWillBeRemoved:(char)a1;
- (void)accordionHost:(id)a0 viewWillExpand:(char)a1;
- (void)handleButtonPress:(id)a0;
- (id)initWithCollapsedButton:(id)a0;

@end
