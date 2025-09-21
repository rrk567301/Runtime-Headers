@interface IFRemoveLoginItemInstallAction : IFInstallAction

- (id)title;
- (id)errorDictionary;
- (char)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (char)runWithQueueElement:(id)a0;

@end
