@class NSString;
@protocol AssistantPopoverViewControllerDelegate;

@interface AssistantPopoverPageMenuItemInfo : AssistantPopoverResult

@property (nonatomic) long long pageMenuType;
@property (weak, nonatomic) id<AssistantPopoverViewControllerDelegate> popoverDelegate;
@property (retain, nonatomic) NSString *accessibilityIdentifier;

- (void)setType:(long long)a0;
- (void).cxx_destruct;

@end
