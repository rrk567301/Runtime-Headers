@class NSString;

@interface IFForceQuitProcessInstallAction : IFInstallAction {
    NSString *_title;
}

- (void)dealloc;
- (id)init;
- (id)title;
- (id)errorDictionary;
- (id)actionSpecificMetadata;
- (char)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (char)runWithQueueElement:(id)a0;

@end
