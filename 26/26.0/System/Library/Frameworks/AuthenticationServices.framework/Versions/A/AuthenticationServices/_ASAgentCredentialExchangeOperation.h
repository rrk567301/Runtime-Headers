@class NSXPCListener, NSString, NSXPCConnection, NSData, NSUUID, NSObject;
@protocol OS_os_transaction;

@interface _ASAgentCredentialExchangeOperation : NSObject

@property (retain, nonatomic) NSString *exporterBundleIdentifier;
@property (retain, nonatomic) NSXPCConnection *exporterConnection;
@property (retain, nonatomic) NSXPCConnection *importerConnection;
@property (retain, nonatomic) NSXPCConnection *viewServiceConnection;
@property (retain, nonatomic) NSData *exportedCredentialData;
@property (retain, nonatomic) NSUUID *importerToken;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (copy, nonatomic) id /* block */ exportDataFetchCompletionHandler;
@property (retain, nonatomic) NSString *selectedImporterBundleIdentifier;
@property (retain, nonatomic) NSXPCListener *viewServiceListener;

- (void).cxx_destruct;

@end
