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

- (void).cxx_destruct;
- (id)header;
- (void)setHeader:(id)a0;
- (id)footer;
- (void)setFooter:(id)a0;
- (BOOL)hasDateTime;
- (void)setHasDateTime:(BOOL)a0;
- (BOOL)hasNowDateTime;
- (void)setHasNowDateTime:(BOOL)a0;
- (BOOL)hasUserDateTime;
- (void)setHasUserDateTime:(BOOL)a0;
- (BOOL)hasSlideNumber;
- (void)setHasSlideNumber:(BOOL)a0;
- (BOOL)hasHeader;
- (void)setHasHeader:(BOOL)a0;
- (BOOL)hasFooter;
- (void)setHasFooter:(BOOL)a0;
- (id)userDateTime;
- (void)setUserDateTime:(id)a0;

@end
