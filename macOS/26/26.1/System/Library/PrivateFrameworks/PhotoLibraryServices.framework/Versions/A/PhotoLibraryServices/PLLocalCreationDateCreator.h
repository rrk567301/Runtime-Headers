@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject

@property (readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup;

+ (void)initialize;
+ (id)_gmtTranslationDictionary;

- (id)generateInferredTimeZoneOffsetForAsset:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimeZoneLookup:(id)a0;

@end
