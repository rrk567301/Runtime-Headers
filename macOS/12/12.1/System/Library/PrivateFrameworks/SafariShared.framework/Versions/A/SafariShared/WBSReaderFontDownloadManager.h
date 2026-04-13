@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject {
    NSMutableDictionary *_fontFamilyToProgress;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasOngoingRequestForFont:(id)a0;
- (double)downloadProgressForFont:(id)a0;
- (void)downloadFont:(id)a0;

@end
