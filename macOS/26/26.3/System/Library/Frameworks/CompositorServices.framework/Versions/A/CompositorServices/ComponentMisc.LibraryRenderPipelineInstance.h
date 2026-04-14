@interface ComponentMisc.LibraryRenderPipelineInstance : NSObject {
    void /* unknown type, empty encoding */ pipelineType;
    void /* unknown type, empty encoding */ fragment;
    void /* unknown type, empty encoding */ vertex;
}

- (id)init;
- (void).cxx_destruct;
- (id)makeRenderPipelineDescriptorWithLibrary:(id)a0 archives:(id)a1 options:(unsigned long long)a2 colorAttachments:(id)a3 constants:(id)a4;

@end
