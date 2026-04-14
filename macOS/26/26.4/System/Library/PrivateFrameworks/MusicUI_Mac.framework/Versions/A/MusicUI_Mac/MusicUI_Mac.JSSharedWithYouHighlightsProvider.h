@class JSValue;

@interface MusicUI_Mac.JSSharedWithYouHighlightsProvider : NSObject <_TtP11MusicUI_MacP33_1FECF8369CD31EF37DA44B6D0E8CAF8139JSSharedWithYouHighlightsProviderExport_> {
    void /* unknown type, empty encoding */ highlightsProvider;
}

@property (nonatomic, readonly) JSValue *isSupported;
@property (nonatomic, readonly) JSValue *isEnabled;
@property (nonatomic, readonly) JSValue *highlights;

- (void).cxx_destruct;
- (id)init;
- (void)startIfNeeded;

@end
