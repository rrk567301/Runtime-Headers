@class IFInstallQueue;

@interface IFEndOfInstallElement : IFInstallQueueElement {
    IFInstallQueue *_installQueue;
    int _installKey;
}

- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)description;
- (void)_addAppRegisterElementWithPaths:(id)a0;
- (id)initWithSessionState:(id)a0 installQueue:(id)a1;

@end
