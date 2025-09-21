@class AVMediaSelectionOption, NSString, NSArray;

@interface TVPAudioOption : NSObject

@property (retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption;
@property (copy, nonatomic) NSString *localizedDisplayString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *languageCodeFromLocale;
@property (copy, nonatomic) NSString *languageCodeBCP47;
@property (retain, nonatomic) id propertyListRepresentation;
@property (nonatomic) int trackID;
@property (copy, nonatomic) NSString *savedLocaleLanguageCode;
@property (readonly, nonatomic) char hasAudioDescriptions;
@property (readonly, nonatomic) NSArray *mediaCharacteristics;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)a0;
- (char)hasMediaCharacteristic:(id)a0;
- (void)_currentLocaleDidChange:(id)a0;
- (id)initWithOption:(id)a0;
- (id)initWithSavedTrackID:(int)a0 savedLocaleLanguageCode:(id)a1;

@end
