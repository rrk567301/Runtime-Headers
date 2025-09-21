@class NSMutableDictionary, TKSmartCardSlot, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface TKSmartCard : NSObject {
    NSObject<OS_dispatch_queue> *_beginSessionQueue;
    char _sensitive;
    char _sensitiveRequired;
    char _synchronous;
    id _session;
    long long _sessionCounter;
    char _someoneWantsSession;
    long long _sessionEndPolicy;
    NSMutableDictionary *_contexts;
    NSNumber *_reservationId;
    char _useExtendedLength;
    char _useCommandChaining;
    unsigned char _cla;
    NSObject *_syncObject;
}

@property unsigned long long currentProtocol;
@property char valid;
@property (readonly, nonatomic) TKSmartCardSlot *slot;
@property unsigned long long allowedProtocols;
@property char sensitive;
@property (retain) id context;

+ (id)_localizedString:(id)a0;
+ (char)decodeResponse:(id)a0 sw:(unsigned short *)a1 appendTo:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setSynchronous:(char)a0;
- (char)synchronous;
- (void)endSession;
- (id)initWithSlot:(id)a0;
- (void)setCla:(unsigned char)a0;
- (unsigned char)cla;
- (id)sendIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 le:(id)a4 sw:(unsigned short *)a5 error:(id *)a6;
- (char)beginSessionWithError:(id *)a0;
- (void)beginSessionWithReply:(id /* block */)a0;
- (id)buildIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 le:(id)a5 protocol:(unsigned long long)a6 chained:(char)a7 extended:(char *)a8 realLe:(unsigned long long *)a9;
- (char)checkAPDUResponse:(id)a0 error:(id *)a1;
- (id)contextForKey:(id)a0;
- (void)encodeLength:(unsigned long long)a0 into:(id)a1 sized:(long long)a2;
- (void)endSessionWithReply:(id /* block */)a0;
- (void)handleApduResponse:(id)a0 body:(id)a1 le:(unsigned long long)a2 isCase4:(char)a3 error:(id)a4 reply:(id /* block */)a5;
- (char)inSessionWithError:(id *)a0 executeBlock:(id /* block */)a1;
- (void)inSlotQueueExecuteBlock:(id /* block */)a0;
- (void)querySessionWithReply:(id /* block */)a0;
- (void)releaseSessionWithReply:(id /* block */)a0;
- (id)remoteSessionWithErrorHandler:(id /* block */)a0;
- (void)reserveExclusive:(char)a0 reply:(id /* block */)a1;
- (char)revalidate;
- (char)selectApplication:(id)a0 error:(id *)a1;
- (void)sendIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 le:(id)a4 reply:(id /* block */)a5;
- (long long)sessionEndPolicy;
- (void)sessionRequested;
- (void)setContext:(id)a0 forKey:(id)a1;
- (void)setSessionEndPolicy:(long long)a0;
- (void)setUseCommandChaining:(char)a0;
- (void)setUseExtendedLength:(char)a0;
- (void)transmitChunkedIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 fromOffset:(unsigned long long)a4 realLe:(unsigned long long)a5 chained:(char)a6 isCase4:(char)a7 reply:(id /* block */)a8;
- (void)transmitRequest:(id)a0 reply:(id /* block */)a1;
- (void)unreserve;
- (char)useCommandChaining;
- (char)useExtendedLength;
- (id)userInteractionForSecurePINChangeWithPINFormat:(id)a0 APDU:(id)a1 currentPINByteOffset:(long long)a2 newPINByteOffset:(long long)a3;
- (id)userInteractionForSecurePINVerificationWithPINFormat:(id)a0 APDU:(id)a1 PINByteOffset:(long long)a2;

@end
