@class IDSIDQueryController;

@interface CNUIIDSIDQueryControllerWrapper : NSObject <CNUIIDSIDQueryControllerWrapper>

@property (readonly, nonatomic) IDSIDQueryController *controller;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;

@end
