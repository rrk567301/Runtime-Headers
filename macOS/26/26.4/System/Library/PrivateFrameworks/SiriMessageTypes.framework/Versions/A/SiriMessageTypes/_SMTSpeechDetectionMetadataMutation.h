@class NSString, SMTSpeechDetectionMetadata;

@interface _SMTSpeechDetectionMetadataMutation : NSObject <SMTSpeechDetectionMetadataMutating> {
    SMTSpeechDetectionMetadata *_base;
    BOOL _didDetectPostVTSilence;
    BOOL _didTRPArrivalTimeout;
    BOOL _noSpeechTokensDetectedInRequest;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDidDetectPostVTSilence : 1; unsigned char hasDidTRPArrivalTimeout : 1; unsigned char hasNoSpeechTokensDetectedInRequest : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setDidDetectPostVTSilence:(BOOL)a0;
- (void)setDidTRPArrivalTimeout:(BOOL)a0;
- (void)setNoSpeechTokensDetectedInRequest:(BOOL)a0;
- (BOOL)getDidDetectPostVTSilence;
- (BOOL)getDidTRPArrivalTimeout;
- (BOOL)getNoSpeechTokensDetectedInRequest;

@end
