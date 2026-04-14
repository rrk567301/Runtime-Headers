@interface RemoteUI.XMLUIScriptInterface : NSObject <RemoteUI.XMLUIScriptInterfaceProtocol> {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ pageLoader;
}

- (id)init;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (void)alert;
- (id)getElementById:(id)a0;
- (id)loadURL;
- (void)setPostbackValueForKey:(id)a0 :(id)a1;

@end
