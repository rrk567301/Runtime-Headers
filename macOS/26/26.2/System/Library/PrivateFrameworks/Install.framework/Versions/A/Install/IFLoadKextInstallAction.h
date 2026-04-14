@interface IFLoadKextInstallAction : IFFileInstallAction

- (id)title;
- (id)init;
- (id)errorDictionary;
- (int)requiredAuth;
- (BOOL)runWithQueueElement:(id)a0;

@end
