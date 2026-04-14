@class NSMutableArray;

@interface CALSoundFileManager : NSObject {
    NSMutableArray *_soundFiles;
}

+ (void)initialize;
+ (id)sharedCALSoundFileManager;

- (long long)count;
- (void).cxx_destruct;
- (id)init;
- (void)addCALSoundFilesFromDirectory:(id)a0 asType:(int)a1;
- (void)findCALSoundFiles;
- (void)sortByName;
- (id)soundFileAtIndex:(long long)a0;

@end
