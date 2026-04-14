@class NSMutableArray;

@interface CALSoundFileManager : NSObject {
    NSMutableArray *_soundFiles;
}

+ (void)initialize;
+ (id)sharedCALSoundFileManager;

- (id)init;
- (long long)count;
- (void).cxx_destruct;
- (void)addCALSoundFilesFromDirectory:(id)a0 asType:(int)a1;
- (void)sortByName;
- (void)findCALSoundFiles;
- (id)soundFileAtIndex:(long long)a0;

@end
