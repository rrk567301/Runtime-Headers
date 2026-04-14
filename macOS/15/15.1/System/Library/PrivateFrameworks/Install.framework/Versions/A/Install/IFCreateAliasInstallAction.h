@interface IFCreateAliasInstallAction : IFFileInstallAction

- (id)title;
- (id)errorDictionary;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (id)resolvedLocation;
- (BOOL)runWithQueueElement:(id)a0;

@end
