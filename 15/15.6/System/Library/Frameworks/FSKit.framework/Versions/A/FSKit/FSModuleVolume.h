@class FSItem, NSString, FSModuleExtension, FSVolume, NSMutableDictionary, NSObject, NSXPCListener, FSResource;
@protocol OS_dispatch_queue, FSVolumeOperations;

@interface FSModuleVolume : NSObject <NSXPCListenerDelegate> {
    int connectionCount;
    unsigned char validConnections;
}

@property (retain) FSModuleExtension *ourExtension;
@property (retain) FSVolume<FSVolumeOperations> *volume;
@property (retain) FSItem *rootFSItem;
@property (retain) NSMutableDictionary *fileHandleToItemTable;
@property (readonly) NSObject<OS_dispatch_queue> *fileHandleQueue;
@property (readonly) NSXPCListener *listener;
@property (retain) FSResource *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSMutableDictionary *connections;
@property (readonly) char spotlightIsEnabled;
@property (readonly) char supportsKOIOOps;
@property (readonly) char supportsAccessOps;
@property (readonly) char supportsOpenCloseOps;
@property (readonly) char supportsReadWriteOps;
@property (readonly) char supportsXattrOps;
@property (readonly) char supportsLimitedXattrOps;
@property (readonly) char supportsCloneOps;
@property (readonly) char supportsPreallocateOps;
@property (readonly) char supportsVolumeRenameOps;
@property (readonly) char supportsItemDeactivation;
@property (readonly) char supportsOpenUnlink;
@property (readonly) char reportAsLocal;
@property (retain) FSModuleExtension *ourExtension;
@property (retain) FSVolume<FSVolumeOperations> *volume;
@property (retain) FSItem *rootFSItem;
@property (retain) NSMutableDictionary *fileHandleToItemTable;
@property (readonly) NSObject<OS_dispatch_queue> *fileHandleQueue;
@property (readonly) NSXPCListener *listener;
@property (retain) FSResource *resource;

+ (id)volumeWithName:(id)a0 resource:(id)a1;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)stopUsingVolume;
- (void)fetchAndSetTypeForItem:(id)a0 replyHandler:(id /* block */)a1;
- (id)getAndRemoveItemForFH:(id)a0;
- (id)getItemForFH:(id)a0;
- (long long)getMaxFileSizeInBits;
- (long long)getMaxXattrSizeInBits;
- (id)initWithVolume:(id)a0 resource:(id)a1;
- (void)insertIntoFHCache:(id)a0;
- (unsigned char)newConnectionID:(id)a0;
- (void)removeConnectionByID:(unsigned char)a0;
- (void)removeFromFHCache:(id)a0;
- (void)updateRootItem:(id)a0 replyHandler:(id /* block */)a1;

@end
