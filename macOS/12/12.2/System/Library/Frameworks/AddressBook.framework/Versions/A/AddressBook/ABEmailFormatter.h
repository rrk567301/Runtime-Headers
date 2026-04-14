@class CNCache;

@interface ABEmailFormatter : ABSearchHighlightFormatter

@property (readonly, nonatomic) CNCache *formattedEmailsCache;

+ (id)sharedEmailAddressScanner;
+ (id)formatEmailAddress:(id)a0;
+ (id)sharedEmailFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;

@end
