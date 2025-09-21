@class NSString;

@interface IFFileInstallAction : IFInstallAction {
    NSString *_componentID;
    NSString *_resolvedPath;
}

- (void)dealloc;
- (id)resolvedPath;
- (char)loadFromXMLElement:(id)a0 scripts:(id)a1;
- (id)resolvedPathWithQueueElement:(id)a0;

@end
