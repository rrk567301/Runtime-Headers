@interface CUIKTextProviderUtils : NSObject

+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorRequiresWhitespace:(BOOL)a1;
+ (BOOL)designatorRequiresWhitespace;
+ (BOOL)smallCapsAllowed;
+ (BOOL)dropLeftRedundantDesignator;

@end
