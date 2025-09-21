@class NSArray, NSString, NSObject, NFReaderSession;
@protocol OS_dispatch_semaphore, NFSession;

@interface MIBUNFCReaderSession : NSObject <NFReaderSessionDelegate, NFHardwareEventListener>

@property (retain, nonatomic) NSObject<NFSession> *nfSession;
@property (retain, nonatomic) NFReaderSession *readerSession;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *connectSem;
@property (nonatomic) BOOL suppressLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)end;
- (id)init;
- (void).cxx_destruct;
- (void)start:(id *)a0;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)disconnectTag:(id *)a0;
- (id)sendCommand:(id)a0 withError:(id *)a1;

@end
