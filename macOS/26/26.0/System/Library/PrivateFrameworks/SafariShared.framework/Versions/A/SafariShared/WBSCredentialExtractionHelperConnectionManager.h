@class NSMutableSet, NSXPCConnection;

@interface WBSCredentialExtractionHelperConnectionManager : NSObject {
    NSMutableSet *_clients;
}

@property (retain, nonatomic) NSXPCConnection *credentialExtractionHelperConnection;

+ (id)sharedManager;

- (void)removeClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)credentialExtractionHelperConnectionRequestedByClient:(id)a0;

@end
