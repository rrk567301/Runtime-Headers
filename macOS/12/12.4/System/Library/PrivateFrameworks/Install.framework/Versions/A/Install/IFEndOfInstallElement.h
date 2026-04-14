@class IFInstallQueue;

@interface IFEndOfInstallElement : IFInstallQueueElement {
    IFInstallQueue *_installQueue;
    int _installKey;
}

- (long long)run;
- (void)dealloc;
- (id)description;
- (id)logDescription;
- (id)initWithSessionState:(id)a0 installQueue:(id)a1;
- (void)_addAppRegisterElementWithPaths:(id)a0;

@end
