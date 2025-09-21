@class NSString, NSXPCInterface;

@interface NSRemoteFinderSavePanel : NSRemoteSavePanel <NSRemoteFinderOpenSavePanelProtocolInternal, NSRemoteFinderOpenSavePanelProtocol>

@property (class, readonly) NSXPCInterface *hostControllerInterface;
@property (class, readonly) NSXPCInterface *targetControllerInterface;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)completePanelWithHostControllerProxy:(id)a0;
- (void)setNumber:(id)a0 withKey:(id)a1 reply:(id /* block */)a2;
- (void)targetDidCompleteBootstrap:(id)a0;

@end
