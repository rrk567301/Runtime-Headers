@class NSArray, NSDictionary;

@interface MapsSuggestionsMeCard : NSObject <NSCopying> {
    NSDictionary *_perCNPostalAddress;
}

@property (readonly, nonatomic) NSArray *shortcutsForHome;
@property (readonly, nonatomic) NSArray *shortcutsForWork;
@property (readonly, nonatomic) NSArray *shortcutsForSchool;
@property (readonly, nonatomic) NSArray *hiddenShortcutsForHome;
@property (readonly, nonatomic) NSArray *hiddenShortcutsForWork;
@property (readonly, nonatomic) NSArray *hiddenShortcutsForSchool;
@property (readonly, nonatomic) NSArray *shortcutsForAll;
@property (readonly, nonatomic) NSArray *shortcutsForAllIncludingHidden;
@property (readonly, nonatomic) NSArray *mapItemsForHome;
@property (readonly, nonatomic) NSArray *mapItemsForWork;
@property (readonly, nonatomic) NSArray *mapItemsForSchool;
@property (readonly, nonatomic) NSArray *mapItemsForAll;
@property (readonly, nonatomic) char hasCorrected;
@property (readonly, nonatomic) char hasGeocoded;
@property (readonly, nonatomic) char hasHomeOrWork;
@property (readonly, nonatomic) char hasHomeOrWorkOrSchool;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithShortcuts:(id)a0 hasCorrected:(char)a1 hasGeocoded:(char)a2;
- (id)initWithShortcuts:(id)a0 perCNPostalAddress:(id)a1 hasCorrected:(char)a2 hasGeocoded:(char)a3;
- (char)isEqualToMeCard:(id)a0;
- (id)shortcutForCNPostalAddressIdentifier:(id)a0;
- (id)shortcutsPerCNPostalAddress;

@end
