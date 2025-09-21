@class NSString;

@interface SPGroupHeadingResult : SFSearchResult_SpotlightExtras {
    NSString *_category;
}

@property (readonly) char supportsFocus;
@property (readonly) NSString *rollOverString;

- (id)description;
- (void).cxx_destruct;
- (char)isSelectable;
- (char)focus:(id)a0 result:(id)a1;
- (id)initWithDisplayName:(id)a0 keyID:(id)a1;
- (char)isGroupHeading;

@end
