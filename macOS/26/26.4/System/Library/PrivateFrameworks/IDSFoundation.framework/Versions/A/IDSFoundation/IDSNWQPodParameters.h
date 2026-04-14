@class NSData, NSObject;
@protocol OS_dispatch_data;

@interface IDSNWQPodParameters : NSObject

@property (readonly, nonatomic) unsigned int clientConnectionID;
@property (readonly, nonatomic) unsigned int serverConnectionID;
@property (readonly, nonatomic) NSData *clientSecret;
@property (readonly, nonatomic) NSData *serverSecret;
@property (readonly, nonatomic) BOOL isServer;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *clientConnectionIDDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serverConnectionIDDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *clientSecretDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serverSecretDispatchData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithClientConnectionID:(unsigned int)a0 serverConnectionID:(unsigned int)a1 clientSecret:(id)a2 serverSecret:(id)a3 isServer:(BOOL)a4;

@end
