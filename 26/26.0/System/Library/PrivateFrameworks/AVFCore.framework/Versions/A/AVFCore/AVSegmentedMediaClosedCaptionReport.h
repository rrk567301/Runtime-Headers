@class NSString, NSDictionary;

@interface AVSegmentedMediaClosedCaptionReport : NSObject {
    NSDictionary *_dict;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSString *ccInStreamID;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isExcludedFromAutoSelection) BOOL excludedFromAutoSelection;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
