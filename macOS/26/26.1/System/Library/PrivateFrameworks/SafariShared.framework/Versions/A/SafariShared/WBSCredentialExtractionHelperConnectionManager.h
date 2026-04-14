@class NSMutableSet, NSXPCConnection;

@interface WBSCredentialExtractionHelperConnectionManager : NSObject {
    NSMutableSet *_clients;
}

@property (retain, nonatomic) NSXPCConnection *credentialExtractionHelperConnection;

+ (id)sharedManager;

- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)credentialExtractionHelperConnectionRequestedByClient:(id)a0;

@end
