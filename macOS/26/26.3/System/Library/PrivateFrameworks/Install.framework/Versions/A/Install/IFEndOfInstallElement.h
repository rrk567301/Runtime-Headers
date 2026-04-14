@class IFInstallQueue;

@interface IFEndOfInstallElement : IFInstallQueueElement {
    IFInstallQueue *_installQueue;
    int _installKey;
}

- (long long)run;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (void)_addAppRegisterElementWithPaths:(id)a0;
- (id)initWithSessionState:(id)a0 installQueue:(id)a1;

@end
