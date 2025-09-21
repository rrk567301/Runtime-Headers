@class NSDictionary;

@interface PLSearchIndexCountrySynonymProvider : NSObject

@property (retain, nonatomic) NSDictionary *countrySynonymsByCountryCode;

+ (id)_loadAllSynonymsData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocalizationPreferences:(id)a0;
- (id)synonymsForCountryCode:(id)a0;

@end
