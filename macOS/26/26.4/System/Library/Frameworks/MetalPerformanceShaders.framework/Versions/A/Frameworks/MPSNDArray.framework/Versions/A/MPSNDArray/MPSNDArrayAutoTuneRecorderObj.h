@class NSString, NSMutableDictionary, NSFileManager, NSURL;

@interface MPSNDArrayAutoTuneRecorderObj : NSObject {
    NSMutableDictionary *_nodeDictionary;
    NSFileManager *_fileManager;
    NSString *_modelFileArchivePath;
    NSURL *_autoTuneNodesDirURL;
}

- (id)init;
- (void)dealloc;
- (id)getKernelNodesForKernelID:(unsigned long long)a0;
- (void)recordNode:(id)a0 kernelID:(unsigned long long)a1;

@end
