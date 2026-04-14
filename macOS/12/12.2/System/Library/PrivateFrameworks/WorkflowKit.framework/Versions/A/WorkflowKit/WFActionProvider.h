@class INStringLocalizer;
@protocol WFActionProviderDelegate;

@interface WFActionProvider : NSObject

@property (weak, nonatomic) id<WFActionProviderDelegate> delegate;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;

- (void).cxx_destruct;
- (void)updateCache:(id /* block */)a0;
- (void)deleteCache;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0;
- (id)createAllAvailableActions;

@end
