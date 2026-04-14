@class NSXPCConnection, NSObject;
@protocol OS_os_transaction;

@interface _EXConnectionActiveQueryObserver : NSObject <_EXActiveQueryObserver>

@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) NSXPCConnection *connection;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWitConnection:(id)a0;
- (void)query:(id)a0 resultDidUpdate:(id)a1;

@end
