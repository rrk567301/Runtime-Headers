@class NSDictionary;

@interface PLSearchIndexCountrySynonymProvider : NSObject

@property (retain, nonatomic) NSDictionary *countrySynonymsByCountryCode;

+ (id)_loadAllSynonymsData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocalizationPreferences:(id)a0;
- (id)synonymsForCountryCode:(id)a0;

@end
