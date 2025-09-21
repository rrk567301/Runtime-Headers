@class NSString, NSArray, AXDialectMap;

@interface AXLangMap : NSObject

@property (nonatomic, getter=isWestern) char western;
@property (nonatomic, getter=isRTL) char rtl;
@property (nonatomic, getter=isAmbiguous) char ambiguous;
@property (copy, nonatomic) NSString *generalLanguageID;
@property (retain, nonatomic) NSArray *alternateLanguageIDs;
@property (retain, nonatomic) NSArray *dialects;
@property (retain, nonatomic) NSArray *associatedAmbiguousLanguages;
@property (readonly, nonatomic) AXDialectMap *defaultDialect;
@property (readonly, nonatomic) AXDialectMap *userLocaleDialect;
@property (weak, nonatomic) AXDialectMap *userPreferredDialect;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)dialectWithLocaleIdentifier:(id)a0;
- (id)initWithLanguageID:(id)a0 isWestern:(char)a1 isAmbiguous:(char)a2 isRTL:(char)a3 dialects:(id)a4 alternateLanguageIDs:(id)a5 associatedAmbiguousLanguages:(id)a6;
- (id)basicDescription;

@end
