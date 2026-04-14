@class CNCache;

@interface ABEmailFormatter : ABSearchHighlightFormatter

@property (readonly, nonatomic) CNCache *formattedEmailsCache;

+ (id)formatEmailAddress:(id)a0;
+ (id)sharedEmailAddressScanner;
+ (id)sharedEmailFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)stringForObjectValue:(id)a0;

@end
