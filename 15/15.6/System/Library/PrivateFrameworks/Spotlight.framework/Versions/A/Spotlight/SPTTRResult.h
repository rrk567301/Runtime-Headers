@class NSString, NSURL;

@interface SPTTRResult : SFSearchResult_SpotlightExtras {
    NSString *_userQuery;
    NSURL *_ttrURL;
}

- (void).cxx_destruct;
- (id)URL;
- (char)allowsCPRecording;
- (id)cardForTTRResult;
- (id)compactCardForTTRResult;
- (id)initWithUserQuery:(id)a0 ttrURL:(id)a1;
- (char)isTTR;
- (id)ttrImage;
- (void)updateURL;

@end
