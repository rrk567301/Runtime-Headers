@class NSMutableDictionary, NSString, AXLTTestTranscriber, AXLTSpeechTranscriber;
@protocol AXLTLiveTranscriptionDelegate;

@interface AXLTLiveTranscription : NSObject <AXLTTranscriberDelegateProtocol>

@property (class, readonly) AXLTLiveTranscription *sharedInstance;

@property (retain, nonatomic) AXLTSpeechTranscriber *speechTranscriber;
@property (retain, nonatomic) AXLTTestTranscriber *testTranscriber;
@property (retain, nonatomic) NSMutableDictionary *dataReceivers;
@property (weak, nonatomic) id<AXLTLiveTranscriptionDelegate> delegate;
@property (nonatomic) char noPunctuation;
@property (nonatomic) long long taskHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)startTranscribing:(long long)a0 targetPID:(int)a1 callbackBlock:(id /* block */)a2 error:(id *)a3;
- (char)stopTranscribing:(long long)a0 targetPID:(int)a1 error:(id *)a2;
- (char)startTranscribing:(long long)a0 targetPID:(int)a1 callbackBlock:(id /* block */)a2 audioInfoBlock:(id /* block */)a3 error:(id *)a4;
- (id)_receiverKeyForRequestType:(long long)a0 targetPID:(int)a1;
- (void)audioInfoData:(id)a0;
- (void)resetTranscribing:(long long)a0;
- (char)startTranscribing:(long long)a0 callbackBlock:(id /* block */)a1 error:(id *)a2;
- (char)startTranscribing:(long long)a0 excludingPIDs:(id)a1 callbackBlock:(id /* block */)a2 error:(id *)a3;
- (char)startTranscribing:(long long)a0 targetPID:(int)a1 excludingPIDs:(id)a2 callbackBlock:(id /* block */)a3 audioInfoBlock:(id /* block */)a4 error:(id *)a5;
- (char)stopTranscribing:(long long)a0 error:(id *)a1;
- (void)transcriberOutputData:(id)a0;

@end
