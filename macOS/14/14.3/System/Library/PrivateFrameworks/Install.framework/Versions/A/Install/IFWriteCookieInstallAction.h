@class NSString;

@interface IFWriteCookieInstallAction : IFInstallAction {
    NSString *_contents;
}

- (void)dealloc;
- (id)title;
- (id)errorDictionary;
- (id)resolvedPath;
- (BOOL)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (BOOL)runWithQueueElement:(id)a0;

@end
