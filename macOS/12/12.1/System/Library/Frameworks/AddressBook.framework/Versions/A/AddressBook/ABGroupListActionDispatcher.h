@class ABGroupListActions;

@interface ABGroupListActionDispatcher : ABActionDispatcher

@property (retain) ABGroupListActions *actions;

- (void).cxx_destruct;
- (void)willRegisterActions;
- (id)actionFor_createGroup;

@end
