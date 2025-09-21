@class CNCache;

@interface ABEmailFormatter : ABSearchHighlightFormatter

@property (readonly, nonatomic) CNCache *formattedEmailsCache;

+ (id)formatEmailAddress:(id)a0;
+ (id)sharedEmailAddressScanner;
+ (id)sharedEmailFormatter;

- (id)stringForObjectValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
