@class NSURL, NSString;

@interface SPParsecGroupHeadingResult : SPGroupHeadingResult {
    NSString *_rolloverString;
}

@property (readonly) NSURL *focusURL;

- (void).cxx_destruct;
- (BOOL)supportsFocus;
- (id)rollOverString;
- (id)initWithDisplayName:(id)a0 keyID:(id)a1 rollOverString:(id)a2 focusURL:(id)a3;

@end
