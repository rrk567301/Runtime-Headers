@class NSObject;
@protocol OS_os_transaction;

@interface COClientObserver : COCoordinationServiceClient

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) id cluster;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)initWithConnection:(id)a0 domain:(id)a1 cluster:(id)a2;

@end
