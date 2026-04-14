@class NSString;

@interface IFWriteCookieInstallAction : IFInstallAction {
    NSString *_contents;
}

- (id)title;
- (void)dealloc;
- (id)resolvedPath;
- (id)errorDictionary;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;

@end
