@class NSArray, NSMutableDictionary, RPCompanionLinkClient;

@interface DRClientManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *serverDictionary;
@property (retain, nonatomic) RPCompanionLinkClient *rapportClient;
@property (readonly, copy) NSArray *availableServers;
@property (copy, nonatomic) id /* block */ serverFoundHandler;
@property (copy, nonatomic) id /* block */ serverLostHandler;

- (id)init;
- (void).cxx_destruct;
- (id)addAvailableDataTypes:(id)a0 dataTypes:(unsigned long long)a1 wxAddress:(id)a2;
- (id)addAvailableDataTypes:(id)a0 dataTypes:(unsigned long long)a1 wxAddress:(id)a2 fromServer:(BOOL)a3;
- (id)addAvailableDataTypes:(unsigned long long)a0 device:(id)a1 wxAddress:(id)a2;
- (unsigned long long)dataTypesForPeer:(unsigned long long)a0 model:(id)a1 majorVersion:(long long)a2 minorVersion:(long long)a3;
- (id)identifierFromOptions:(id)a0;
- (id)removeAvailableDataTypes:(id)a0 dataTypes:(unsigned long long)a1 wxAddress:(id)a2;
- (id)removeAvailableDataTypes:(id)a0 dataTypes:(unsigned long long)a1 wxAddress:(id)a2 fromServer:(BOOL)a3;
- (id)removeAvailableDataTypes:(unsigned long long)a0 device:(id)a1 wxAddress:(id)a2;
- (void)setupRapport;
- (void)wxAddressChanged:(id)a0 wxAddress:(id)a1;

@end
