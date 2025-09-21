@class ATXDefaultWidgetStack, NSArray;

@interface ATXDefaultHomeScreenItemOnboardingStacks : NSObject

@property (readonly, nonatomic) ATXDefaultWidgetStack *stack1;
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack2;
@property (readonly, copy, nonatomic) NSArray *onboardingStacks;
@property (readonly, nonatomic) NSArray *sortedThirdPartyWidgets;

- (id)initWithOnboardingStacks:(id)a0 sortedThirdPartyWidgets:(id)a1;
- (id)initWithOnboardingStack1:(id)a0 stack2:(id)a1 sortedThirdPartyWidgets:(id)a2;
- (void).cxx_destruct;

@end
