@class NSString;

@interface IFForceQuitProcessInstallAction : IFInstallAction {
    NSString *_title;
}

- (id)title;
- (id)init;
- (void)dealloc;
- (id)errorDictionary;
- (id)actionSpecificMetadata;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;

@end
