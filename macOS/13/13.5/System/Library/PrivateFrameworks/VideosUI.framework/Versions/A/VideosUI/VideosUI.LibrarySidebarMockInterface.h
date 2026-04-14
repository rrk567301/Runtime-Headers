@interface VideosUI.LibrarySidebarMockInterface : NSObject <VUILibrarySidebarInterface>

- (id)init;
- (void)fetchConnectedDeviceListWithCompletion:(id /* block */)a0;
- (void)fetchHomeSharingSourceModelsWithCompletion:(id /* block */)a0;
- (id)getLocalLibrarySidebarSourceModel;

@end
