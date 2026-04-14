@class NSArray, NSMutableArray;
@protocol NSCopying, NSObject, AXUIService;

@interface AXUIServiceContext : NSObject

@property (retain, nonatomic) id<AXUIService> service;
@property (copy, nonatomic) id<NSObject, NSCopying> serviceIdentifier;
@property (retain, nonatomic) NSMutableArray *clientMessengers;
@property (readonly, nonatomic) unsigned long long clientsCount;
@property (readonly, nonatomic) NSArray *clientMessengerList;

- (id)initWithService:(id)a0 serviceIdentifier:(id)a1;
- (id)clientMessengerWithIdentifier:(id)a0;
- (int)pidForClientWithIdentifier:(id)a0;
- (unsigned long long)_indexOfClientWithIdentifier:(id)a0;
- (void)enumerateClientsUsingBlock:(id /* block */)a0;
- (void)addClientWithIdentifier:(id)a0 connection:(id)a1;
- (void)removeClientWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasClientWithIdentifier:(id)a0;

@end
