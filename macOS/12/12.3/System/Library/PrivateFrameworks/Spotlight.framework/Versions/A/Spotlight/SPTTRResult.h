@class NSString, NSURL;

@interface SPTTRResult : SFSearchResult_SpotlightExtras {
    NSString *_userQuery;
    NSURL *_ttrURL;
}

- (void).cxx_destruct;
- (id)URL;
- (BOOL)isTTR;
- (id)initWithUserQuery:(id)a0 ttrURL:(id)a1;
- (id)iconForVariant:(unsigned long long)a0;
- (id)compactCardForTTRResult;
- (id)cardForTTRResult;
- (void)updateURL;
- (BOOL)allowsCPRecording;

@end
