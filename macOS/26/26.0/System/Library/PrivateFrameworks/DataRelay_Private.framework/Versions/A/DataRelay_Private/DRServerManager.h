@class NSMutableDictionary, NSData, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface DRServerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *clientDictionary;
@property (retain, nonatomic) NSMutableDictionary *cidDictionary;
@property (retain, nonatomic) RPCompanionLinkClient *rapportClient;
@property (retain, nonatomic) NSData *wxRoute;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientDictionaryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (void)removeRequestedDataTypes:(id)a0 types:(unsigned long long)a1;
- (void)addAvailableDataTypesToClient:(id)a0 dataTypes:(unsigned long long)a1 connectionID:(unsigned int)a2 completion:(id /* block */)a3;
- (void)addRequestedDataTypes:(id)a0 types:(unsigned long long)a1;
- (void)addToCidDictionary:(unsigned int)a0 idsIdentifier:(id)a1 dataTypes:(unsigned long long)a2;
- (void)handleXPCDisconnected:(unsigned int)a0;
- (id)identifierFromOptions:(id)a0;
- (void)removeAvailableDataTypesToClient:(id)a0 dataTypes:(unsigned long long)a1 connectionID:(unsigned int)a2 completion:(id /* block */)a3;
- (void)removeFromCidDictionary:(unsigned int)a0 idsIdentifier:(id)a1 dataTypes:(unsigned long long)a2;
- (void)setupAAS;
- (void)setupRapport;

@end
