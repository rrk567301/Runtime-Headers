@interface CNEmailAddressUtilities : NSObject

+ (id)expandAliasedDomainsInAddress:(id)a0;
+ (id)aliasedDomains;
+ (id)safeUserVisibleEmailAddress:(id)a0;
+ (BOOL)isStringEmailAddress:(id)a0;
+ (id)makeEmailRegex;

@end
