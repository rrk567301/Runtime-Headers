@class NSString, AFSpeechSynthesisRecord;

@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating> {
    AFSpeechSynthesisRecord *_base;
    NSString *_utterance;
    unsigned long long _beginTimestamp;
    unsigned long long _endTimestamp;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasUtterance : 1; unsigned char hasBeginTimestamp : 1; unsigned char hasEndTimestamp : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setEndTimestamp:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setBeginTimestamp:(unsigned long long)a0;
- (void)setUtterance:(id)a0;
- (unsigned long long)getEndTimestamp;
- (unsigned long long)getBeginTimestamp;
- (id)getUtterance;

@end
