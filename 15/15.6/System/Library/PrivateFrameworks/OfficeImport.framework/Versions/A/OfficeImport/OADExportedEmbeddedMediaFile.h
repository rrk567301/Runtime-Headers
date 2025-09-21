@class TSPData;

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {
    char isAudioOnly;
}

@property (retain, nonatomic) TSPData *tspData;

- (void).cxx_destruct;
- (char)isAudioOnly;
- (void)setIsAudioOnly:(char)a0;

@end
