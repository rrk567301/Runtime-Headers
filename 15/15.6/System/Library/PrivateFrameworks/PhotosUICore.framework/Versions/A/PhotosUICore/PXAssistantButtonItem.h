@class NSString;

@interface PXAssistantButtonItem : PXObservable

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isHidden) char hidden;
@property (readonly, nonatomic, getter=isDisabled) char disabled;

- (void).cxx_destruct;
- (void)setHidden:(char)a0;
- (id)initWithTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)setDisabled:(char)a0;
- (void)performChanges:(id /* block */)a0;

@end
