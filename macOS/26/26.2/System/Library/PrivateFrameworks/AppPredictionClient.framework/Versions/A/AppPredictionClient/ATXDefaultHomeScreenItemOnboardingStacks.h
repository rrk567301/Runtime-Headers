@class ATXDefaultWidgetStack, NSArray;

@interface ATXDefaultHomeScreenItemOnboardingStacks : NSObject

@property (readonly, nonatomic) ATXDefaultWidgetStack *stack1;
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack2;
@property (readonly, copy, nonatomic) NSArray *onboardingStacks;
@property (readonly, nonatomic) NSArray *sortedThirdPartyWidgets;

- (void).cxx_destruct;
- (id)initWithOnboardingStack1:(id)a0 stack2:(id)a1 sortedThirdPartyWidgets:(id)a2;
- (id)initWithOnboardingStacks:(id)a0 sortedThirdPartyWidgets:(id)a1;

@end
