@interface WFActionDrawerUtilities : NSObject

+ (id)suggestionSectionsForDonations:(id)a0 excludingConvertedLinkActions:(BOOL)a1;
+ (id)activitySectionsForDonations:(id)a0;
+ (id)localizedAppNames;
+ (id)appSectionsForDonations:(id)a0;
+ (id)appSectionsForActionSections:(id)a0;
+ (id)deduplicateAppSections:(id)a0;
+ (id)filterAppSections:(id)a0 searchQuery:(id)a1;

@end
