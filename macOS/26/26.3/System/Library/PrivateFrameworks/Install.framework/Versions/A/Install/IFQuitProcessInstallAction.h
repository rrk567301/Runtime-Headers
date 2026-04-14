@class NSString;

@interface IFQuitProcessInstallAction : IFInstallAction {
    NSString *_title;
}

- (id)init;
- (id)title;
- (void)dealloc;
- (id)errorDictionary;
- (id)actionSpecificMetadata;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;

@end
