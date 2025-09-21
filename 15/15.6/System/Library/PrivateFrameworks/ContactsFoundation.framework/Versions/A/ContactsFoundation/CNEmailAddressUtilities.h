@interface CNEmailAddressUtilities : NSObject

+ (id)aliasedDomains;
+ (id)expandAliasedDomainsInAddress:(id)a0;
+ (char)isStringEmailAddress:(id)a0;
+ (id)makeEmailRegex;
+ (id)safeUserVisibleEmailAddress:(id)a0;

@end
