@class NSMapTable, NSArray, NSData, NSMutableData, NSObject;
@protocol OS_os_log, MFPOPAccount, MFPOPConnectionDelegate;

@interface MFPOPConnection : MCConnection {
    NSMutableData *_sendBuffer;
    NSMapTable *_listResults;
    NSMapTable *_serverMessageIdsByNumber;
    id<MFPOPConnectionDelegate> _delegate;
    NSData *_apopTimeStamp;
    NSArray *_capabilities;
    char _capaCommandFailed;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id context;
@property (nonatomic) unsigned long long numberOfMessagesToFetch;
@property (nonatomic) unsigned long long numberOfMessagesFetched;
@property (nonatomic) char currentlyFetchingMessage;
@property (nonatomic) unsigned long long numberOfMessagesAvailable;
@property (nonatomic) char connectionShouldPrefetchMessages;
@property (weak) id<MFPOPAccount> account;
@property (nonatomic) unsigned long long totalBytesToFetch;
@property (nonatomic) unsigned long long totalBytesReceived;
@property (nonatomic) long long activityMonitorKey;
@property (readonly, nonatomic) char messagesAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)quit;
- (void)_setupConnection;
- (char)authenticate;
- (id)_capabilities;
- (char)isNonAppInitiated;
- (id)authenticationMechanisms;
- (char)_getListResults;
- (char)_apopWithUsername:(id)a0 password:(id)a1;
- (id)_authenticateWithNonPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (char)_authenticateWithSASLClient:(id)a0;
- (char)_completeConnectionWithResult:(char)a0;
- (id)_copyResponseLineData;
- (void)_logServerResponse:(id)a0;
- (id)_newDataForMessage:(unsigned long long)a0 ofSize:(unsigned long long)a1 informDelegate:(char)a2;
- (void)_parseErrorFromResponseData:(id)a0 isCapabilitiesError:(char)a1 isAuthenticationError:(char)a2;
- (char)_parseSingleLineResponse:(id)a0 status:(long long)a1 responseCode:(long long *)a2 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 humanReadableText:(id *)a4;
- (char)_pass:(id)a0;
- (char)_quit;
- (char)_readAndParseSingleLineResponseIsCapabilities:(char)a0 isAuthentication:(char)a1 logFullResponse:(char)a2;
- (char)_readMultilineResponseWithMaxSize:(unsigned long long)a0 intoMutableData:(id)a1 informDelegate:(char)a2;
- (char)_retr:(unsigned long long)a0;
- (char)_sendCommand:(const char *)a0 dontLogIndex:(unsigned long long)a1 withArguments:(id)a2;
- (char)_startTLS;
- (char)_supportsAPOP;
- (char)_supportsAuthResponseCode;
- (char)_supportsResponseCodes;
- (char)_supportsStartTLS;
- (char)_supportsUSER;
- (char)_user:(id)a0;
- (char)dele:(unsigned long long)a0;
- (char)deleteMessagesOnServer:(id)a0;
- (char)doStat;
- (id)errorURLScheme;
- (char)fetchMessages:(id)a0 totalBytes:(unsigned long long)a1;
- (char)getMessageNumbers:(id *)a0 andMessageIdsByNumber:(id *)a1;
- (void)getTopOfMessageNumber:(unsigned long long)a0 intoMutableData:(id)a1;
- (id)messageIDForMessageNumber:(unsigned long long)a0;
- (id)newMessageHeaderForMessageNumber:(unsigned long long)a0;
- (void)setDelegate:(id)a0 context:(id)a1;
- (void)setMessageID:(id)a0 forMessageNumber:(unsigned long long)a1;
- (unsigned long long)sizeOfMessageNumber:(unsigned long long)a0;
- (char)supportsPlainTextSchemes;

@end
