@interface IFUnloadKextInstallAction : IFFileInstallAction

- (id)init;
- (id)title;
- (id)errorDictionary;
- (int)requiredAuth;
- (char)runWithQueueElement:(id)a0;

@end
