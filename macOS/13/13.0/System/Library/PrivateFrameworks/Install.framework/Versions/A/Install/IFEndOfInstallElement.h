@class IFInstallQueue;

@interface IFEndOfInstallElement : IFInstallQueueElement {
    IFInstallQueue *_installQueue;
    int _installKey;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (id)initWithSessionState:(id)a0 installQueue:(id)a1;
- (void)_addAppRegisterElementWithPaths:(id)a0;

@end
