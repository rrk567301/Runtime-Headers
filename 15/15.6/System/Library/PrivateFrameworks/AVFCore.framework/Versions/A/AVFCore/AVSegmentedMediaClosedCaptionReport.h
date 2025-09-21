@class NSString, NSDictionary;

@interface AVSegmentedMediaClosedCaptionReport : NSObject {
    NSDictionary *_dict;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSString *ccInStreamID;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic, getter=isExcludedFromAutoSelection) char excludedFromAutoSelection;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
