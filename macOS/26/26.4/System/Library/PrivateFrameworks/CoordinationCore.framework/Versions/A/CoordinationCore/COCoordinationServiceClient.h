@class NSString, NSXPCConnection;

@interface COCoordinationServiceClient : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
