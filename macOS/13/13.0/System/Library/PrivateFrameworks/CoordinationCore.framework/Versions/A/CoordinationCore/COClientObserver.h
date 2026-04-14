@class NSObject, NSXPCConnection;
@protocol OS_os_transaction;

@interface COClientObserver : NSObject <NSCopying>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
