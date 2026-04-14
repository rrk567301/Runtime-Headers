@protocol AssistantPopoverViewControllerDelegate;

@interface AssistantPopoverPageMenuItemInfo : AssistantPopoverResult

@property (nonatomic) long long pageMenuType;
@property (weak, nonatomic) id<AssistantPopoverViewControllerDelegate> popoverDelegate;

- (void).cxx_destruct;
- (void)setType:(long long)a0;

@end
