@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol> {
    char _privacyUserReadEntitled;
    unsigned char _privacyUserReadEntitlementChecked;
    char _privacyUserWriteEntitled;
    unsigned char _privacyUserWriteEntitlementChecked;
    char _privacySystemWriteEntitled;
    unsigned char _privacySystemWriteEntitlementChecked;
}

@property struct { unsigned int val[8]; } auditToken;
@property int processIdentifier;
@property unsigned int userIdentifier;

- (char)clientCanWriteSource:(int)a0;
- (void)fileForSourceRead:(id)a0 resourceType:(unsigned long long)a1 withReply:(id /* block */)a2;
- (id)fileHandleForSourceRead:(int)a0 resourceType:(unsigned long long)a1;
- (void)filesForSourceRead:(id)a0 resourceType:(unsigned long long)a1 withReply:(id /* block */)a2;
- (char)privacySystemWriteEntitled;
- (char)privacyUserReadEntitled;
- (char)privacyUserWriteEntitled;
- (char)pushSourcesContent:(id)a0 forSource:(int)a1 signature:(id)a2;
- (void)writeSourceFromJSONFile:(id)a0 source:(id)a1 withReply:(id /* block */)a2;
- (void)writeSourceFromRawData:(id)a0 source:(id)a1 signature:(id)a2 withReply:(id /* block */)a3;

@end
