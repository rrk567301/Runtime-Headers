@class NSString;

@interface SPGroupHeadingResult : SFSearchResult_SpotlightExtras {
    NSString *_category;
}

@property (readonly) BOOL supportsFocus;
@property (readonly) NSString *rollOverString;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isSelectable;
- (BOOL)focus:(id)a0 result:(id)a1;
- (id)initWithDisplayName:(id)a0 keyID:(id)a1;
- (BOOL)isGroupHeading;

@end
