@interface CNEmailAddressUtilities : NSObject

+ (id)expandAliasedDomainsInAddress:(id)a0;
+ (id)aliasedDomains;
+ (id)safeUserVisibleEmailAddress:(id)a0;
+ (id)makeEmailRegex;
+ (BOOL)isStringEmailAddress:(id)a0;

@end
