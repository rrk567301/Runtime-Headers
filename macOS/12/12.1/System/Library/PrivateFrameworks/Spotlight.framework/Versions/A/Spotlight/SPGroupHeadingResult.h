@class NSString;

@interface SPGroupHeadingResult : SFSearchResult_SpotlightExtras {
    NSString *_category;
}

@property (readonly) BOOL supportsFocus;
@property (readonly) NSString *rollOverString;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isSelectable;
- (BOOL)isGroupHeading;
- (id)initWithDisplayName:(id)a0 keyID:(id)a1;
- (BOOL)focus:(id)a0 result:(id)a1;

@end
