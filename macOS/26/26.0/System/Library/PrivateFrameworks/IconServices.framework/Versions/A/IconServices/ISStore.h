@class NSMutableDictionary, NSXPCConnection, NSURL, NSString;

@interface ISStore : NSObject

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSURL *storeURL;
@property (readonly) NSMutableDictionary *registry;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } registryLock;
@property (readonly) NSString *domain;

- (id)unitForUUID:(id)a0;
- (id)init;
- (BOOL)removeUnitForUUID:(id)a0;
- (id)addUnitWithData:(id)a0;
- (void).cxx_destruct;

@end
