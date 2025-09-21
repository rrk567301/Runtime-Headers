@class NSMutableDictionary;

@interface DACPLogShared : NSObject {
    NSMutableDictionary *_UUIDToFileMap;
}

@property (class, readonly) DACPLogShared *shared;

- (id)init;
- (void).cxx_destruct;
- (char)_array:(id)a0 beginsWithArray:(id)a1 outRemainingArray:(id *)a2;
- (id)_getUUIDForFolder:(id)a0 baseName:(id)a1;
- (char)_logData:(id)a0 UUID:(id)a1 startNewFile:(char)a2 sizeCheck:(long long)a3 wantsCompressed:(char)a4 maxFileCount:(long long)a5 outDidCreateNewFile:(char *)a6 outNewFilePath:(id *)a7;
- (char)_slurpToFileUUID:(id)a0 slurpeeFileDescriptor:(int)a1 prefix:(id)a2 suffix:(id)a3 startNewFile:(char)a4 sizeCheck:(long long)a5 wantsCompressed:(char)a6 maxLogFileCount:(int)a7 outDidCreateNewFile:(char *)a8 outNewFilePath:(id *)a9;

@end
