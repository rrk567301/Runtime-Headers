@class NSString, NSURL;

@interface SPTTRResult : SFSearchResult_SpotlightExtras <NSSecureCoding> {
    NSString *_userQuery;
    NSURL *_ttrURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsCPRecording;
- (id)cardForTTRResult;
- (id)compactCardForTTRResult;
- (id)initWithUserQuery:(id)a0 ttrURL:(id)a1;
- (BOOL)isTTR;
- (id)ttrImage;
- (void)updateURL;

@end
