@interface SNAudioBufferList : NSObject {
    struct unique_ptr<CABufferList, std::default_delete<CABufferList>> { struct CABufferList *__ptr_; } _ringBufferWriteBufferList;
}

+ (void)unownedViewOfRecentFramesWithSourceBuffer:(id)a0 destinationBuffer:(id)a1 numberOfRecentFrames:(unsigned int)a2;

- (id)initWithFormat:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)bufferList;

@end
