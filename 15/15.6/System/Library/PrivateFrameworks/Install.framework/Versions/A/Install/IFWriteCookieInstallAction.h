@class NSString;

@interface IFWriteCookieInstallAction : IFInstallAction {
    NSString *_contents;
}

- (void)dealloc;
- (id)title;
- (id)resolvedPath;
- (id)errorDictionary;
- (char)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (char)runWithQueueElement:(id)a0;

@end
