@class NSString;

@interface PDHeadersFooters : NSObject {
    char mHasDateTime;
    char mHasNowDateTime;
    char mHasUserDateTime;
    char mHasSlideNumber;
    char mHasHeader;
    char mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}

- (void).cxx_destruct;
- (id)header;
- (void)setHeader:(id)a0;
- (id)footer;
- (void)setFooter:(id)a0;
- (char)hasDateTime;
- (char)hasHeader;
- (char)hasUserDateTime;
- (void)setHasDateTime:(char)a0;
- (char)hasFooter;
- (char)hasNowDateTime;
- (char)hasSlideNumber;
- (void)setHasFooter:(char)a0;
- (void)setHasHeader:(char)a0;
- (void)setHasNowDateTime:(char)a0;
- (void)setHasSlideNumber:(char)a0;
- (void)setHasUserDateTime:(char)a0;
- (void)setUserDateTime:(id)a0;
- (id)userDateTime;

@end
