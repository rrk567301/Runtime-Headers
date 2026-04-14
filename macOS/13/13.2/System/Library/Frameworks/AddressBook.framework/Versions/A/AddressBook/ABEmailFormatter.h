@class CNCache;

@interface ABEmailFormatter : ABSearchHighlightFormatter

@property (readonly, nonatomic) CNCache *formattedEmailsCache;

+ (id)sharedEmailFormatter;
+ (id)sharedEmailAddressScanner;
+ (id)formatEmailAddress:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;

@end
