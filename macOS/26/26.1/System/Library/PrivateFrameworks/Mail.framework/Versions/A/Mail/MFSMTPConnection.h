@class NSMutableData, NSString, _MFSMTPEnhancedStatusCode, MFSMTPAccount, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface MFSMTPConnection : MCConnection {
    id _lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) _MFSMTPEnhancedStatusCode *lastStatusCode;
@property (nonatomic) double originalSocketTimeout;
@property (nonatomic) double timeLastCommandWasSent;
@property (nonatomic) int lastReplyCode;
@property (nonatomic) long long greeting;
@property (nonatomic) BOOL needToSendGreeting;
@property (weak) MFSMTPAccount *account;
@property (readonly, copy, nonatomic) NSString *lastResponse;
@property (readonly, nonatomic) unsigned long long maximumMessageBytes;

- (long long)noop;
- (long long)_state;
- (id)_makeInvalidCredentialsError;
- (BOOL)_completeConnectionWithResult:(BOOL)a0;
- (void)quit;
- (long long)_sendDataDontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)_sendCommand:(const char *)a0 length:(unsigned long long)a1 argument:(id)a2 dontLogArgumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 trailer:(unsigned char)a4;
- (long long)_sendEHLOWithClientDomainName:(id)a0;
- (BOOL)connectDiscoveringBestSettings:(BOOL)a0;
- (BOOL)_startTLS;
- (BOOL)_authenticateWithSASLClient:(id)a0;
- (void)_readResponseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 isContinuation:(BOOL *)a1;
- (long long)sendDatas:(id)a0;
- (long long)_doHandshakeTryHELOIfEHLOFails:(BOOL)a0;
- (long long)rcptTo:(id)a0;
- (long long)_sendHELOWithClientDomainName:(id)a0;
- (BOOL)authenticate;
- (id)_getErrorFromFailedAuthentication;
- (long long)_getReply;
- (id)authenticationMechanisms;
- (void)_setupConnection;
- (void).cxx_destruct;
- (id)errorURLScheme;
- (BOOL)_hasParameter:(id)a0 forKeyword:(id)a1;
- (BOOL)isNonAppInitiated;
- (long long)mailFrom:(id)a0;
- (id)init;

@end
