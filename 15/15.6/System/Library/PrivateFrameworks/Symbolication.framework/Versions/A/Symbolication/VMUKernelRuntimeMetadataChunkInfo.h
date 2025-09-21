@class VMUClassInfo;

@interface VMUKernelRuntimeMetadataChunkInfo : NSObject {
    char isMetaclass;
    unsigned int type;
    VMUClassInfo *owningClassInfo;
}

- (void).cxx_destruct;

@end
