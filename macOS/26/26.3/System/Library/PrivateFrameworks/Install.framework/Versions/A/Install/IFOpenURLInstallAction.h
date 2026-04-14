@class NSURL;

@interface IFOpenURLInstallAction : IFInstallAction {
    NSURL *_url;
}

- (id)title;
- (void)dealloc;
- (id)errorDictionary;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;

@end
