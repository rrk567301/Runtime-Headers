@interface IFUnloadKextInstallAction : IFFileInstallAction

- (id)init;
- (id)title;
- (id)errorDictionary;
- (BOOL)runWithQueueElement:(id)a0;
- (int)requiredAuth;

@end
