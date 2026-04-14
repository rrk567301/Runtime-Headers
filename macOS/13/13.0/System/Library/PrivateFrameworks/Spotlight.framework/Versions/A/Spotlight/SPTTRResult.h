@class NSString, NSURL;

@interface SPTTRResult : SFSearchResult_SpotlightExtras {
    NSString *_userQuery;
    NSURL *_ttrURL;
}

- (void).cxx_destruct;
- (id)URL;
- (BOOL)isTTR;
- (id)initWithUserQuery:(id)a0 ttrURL:(id)a1;
- (void)updateURL;
- (id)cardForTTRResult;
- (id)compactCardForTTRResult;
- (id)ttrImage;
- (BOOL)allowsCPRecording;

@end
