@class NSNumberFormatter, NSMutableDictionary, NSDateComponentsFormatter;

@interface VUIMediaTagsViewHelper : NSObject {
    NSMutableDictionary *_tagsViewDictionary;
    NSDateComponentsFormatter *_dateComponentFormatter;
    NSNumberFormatter *_tomatoPercentFormatter;
}

- (void).cxx_destruct;
- (id)initWithContentMetadata:(id)a0 additionalMetadata:(id)a1;
- (id)tagsViewDictionary;
- (void)addSeperatorKey:(id)a0;
- (BOOL)_isValidNumber:(id)a0;
- (id)_releaseDateDescriptionFromDate:(id)a0;
- (id)_durationDescriptionFromDuration:(id)a0;
- (id)_commonSenseString:(id)a0;

@end
