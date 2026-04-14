@interface VideosUI.JSNativeStorage : VUIJSObject <VideosUI.JSPNativeStorageInterface>

- (id)init;
- (id)initWithAppContext:(id)a0;
- (id)initWithAppStack:(id)a0;
- (void)readData:(id)a0 :(id)a1;
- (id)readDataAsync:(id)a0;
- (void)storeData:(id)a0 :(id)a1 :(id)a2;
- (id)storeDataAsync:(id)a0 :(id)a1;

@end
