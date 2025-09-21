@interface CUIKTextProviderUtils : NSObject

+ (char)designatorRequiresWhitespace;
+ (char)dropLeftRedundantDesignator;
+ (char)smallCapsAllowed;
+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorRequiresWhitespace:(char)a1;

@end
