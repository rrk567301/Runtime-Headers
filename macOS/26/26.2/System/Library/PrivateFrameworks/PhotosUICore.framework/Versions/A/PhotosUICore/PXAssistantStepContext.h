@class NSString, PXAssistantTemplateViewController;

@interface PXAssistantStepContext : PXObservable

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PXAssistantTemplateViewController *viewController;

- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 viewController:(id)a1;

@end
