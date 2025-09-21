@class AFCallSiteInfo;

@interface AFClientLite : NSObject {
    AFCallSiteInfo *_initiationCallSiteInfo;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleCommand:(id)a0 afterCurrentRequest:(char)a1 isOneWay:(char)a2 commandHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)handleCommand:(id)a0 afterCurrentRequest:(char)a1 commandHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)handleCommand:(id)a0 commandHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)handleOneWayCommand:(id)a0 commandHandler:(id /* block */)a1 completion:(id /* block */)a2;

@end
