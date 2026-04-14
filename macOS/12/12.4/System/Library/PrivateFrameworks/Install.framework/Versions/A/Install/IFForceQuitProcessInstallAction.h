@class NSString;

@interface IFForceQuitProcessInstallAction : IFInstallAction {
    NSString *_title;
}

- (void)dealloc;
- (id)init;
- (id)title;
- (id)errorDictionary;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;
- (id)actionSpecificMetadata;

@end
