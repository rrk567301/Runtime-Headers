@class NSString;

@interface PDHeadersFooters : NSObject {
    BOOL mHasDateTime;
    BOOL mHasNowDateTime;
    BOOL mHasUserDateTime;
    BOOL mHasSlideNumber;
    BOOL mHasHeader;
    BOOL mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}

- (id)footer;
- (void)setHasFooter:(BOOL)a0;
- (void)setFooter:(id)a0;
- (void)setHeader:(id)a0;
- (BOOL)hasFooter;
- (id)header;
- (void).cxx_destruct;
- (BOOL)hasHeader;
- (BOOL)hasDateTime;
- (BOOL)hasUserDateTime;
- (void)setHasDateTime:(BOOL)a0;
- (BOOL)hasNowDateTime;
- (BOOL)hasSlideNumber;
- (void)setHasHeader:(BOOL)a0;
- (void)setHasNowDateTime:(BOOL)a0;
- (void)setHasSlideNumber:(BOOL)a0;
- (void)setHasUserDateTime:(BOOL)a0;
- (void)setUserDateTime:(id)a0;
- (id)userDateTime;

@end
