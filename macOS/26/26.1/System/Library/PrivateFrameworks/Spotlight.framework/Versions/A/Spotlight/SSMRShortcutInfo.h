@class SFSearchResult_SpotlightExtras;

@interface SSMRShortcutInfo : NSObject {
    BOOL isCoreSpotlightResult;
    BOOL isMetadataResult;
}

@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL shortcutMapped;
@property (retain, nonatomic) SFSearchResult_SpotlightExtras *result;
@property (nonatomic) BOOL hasSafariShortcutResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 shortcutLastUsedDate:(id)a1 forQuery:(id)a2;
- (void)mapToResult:(id)a0;

@end
