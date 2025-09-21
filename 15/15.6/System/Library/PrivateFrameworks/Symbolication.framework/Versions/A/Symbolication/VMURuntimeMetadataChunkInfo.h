@class VMUClassInfo;

@interface VMURuntimeMetadataChunkInfo : NSObject {
    char isMetaclass;
    unsigned int type;
    VMUClassInfo *owningClassInfo;
}

- (void).cxx_destruct;

@end
