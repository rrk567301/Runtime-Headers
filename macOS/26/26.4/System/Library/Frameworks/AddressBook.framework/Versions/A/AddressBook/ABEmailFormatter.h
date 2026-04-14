@class CNCache;

@interface ABEmailFormatter : ABSearchHighlightFormatter

@property (readonly, nonatomic) CNCache *formattedEmailsCache;

+ (id)formatEmailAddress:(id)a0;
+ (id)sharedEmailAddressScanner;
+ (id)sharedEmailFormatter;

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
