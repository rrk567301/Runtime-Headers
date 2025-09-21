@interface ATCallTranslatorInsert : NSObject {
    struct shared_ptr<AT::Translation::CallTranslator> { struct CallTranslator *__ptr_; struct __shared_weak_count *__cntrl_; } _callTranslator;
}

@property (nonatomic, getter=isInputMuted) BOOL inputMuted;
@property (readonly, nonatomic) id /* block */ processBlock;
@property (readonly, nonatomic) id /* block */ inPlaceProcessBlock;
@property (readonly, nonatomic) id /* block */ injectLocalFeedbackOfInputTranslationProcessingBlock;
@property (readonly, nonatomic) id /* block */ injectRemoteFeedbackOfOutputTranslationProcessingBlock;

+ (id)createProcessingInsert:(id)a0 inputStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 inputStreamLayoutTag:(unsigned int)a2 outputStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a3 outputStreamLayoutTag:(unsigned int)a4 maxFrames:(unsigned int)a5;
+ (id)createProcessingInsert:(id)a0 inputStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 inputStreamLayoutTag:(unsigned int)a2 outputStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a3 outputStreamLayoutTag:(unsigned int)a4 maxFrames:(unsigned int)a5 reporterID:(long long)a6;

- (BOOL)isEquivalent:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)inferActiveAudioChannel:(void *)a0;
- (id)initWithCallTranslator:(struct shared_ptr<AT::Translation::CallTranslator> { struct CallTranslator *x0; struct __shared_weak_count *x1; })a0;
- (void)setStreamFormat:(unsigned int)a0 streamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 layoutTag:(unsigned int)a2;

@end
