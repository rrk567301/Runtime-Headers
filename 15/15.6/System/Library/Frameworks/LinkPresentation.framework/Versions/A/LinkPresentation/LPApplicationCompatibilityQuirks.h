@interface LPApplicationCompatibilityQuirks : NSObject

+ (char)allowsSkinnyWidthByDefault;
+ (char)needsFreshWKUserContentController;
+ (char)supportsLPLinkViewAutolayout;

@end
