@class NSObject, NSXPCConnection;
@protocol OS_os_transaction;

@interface COClientObserver : NSObject <NSCopying>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) id cluster;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 cluster:(id)a1;

@end
