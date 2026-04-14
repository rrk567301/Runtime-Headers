@interface CUIKTextProviderUtils : NSObject

@property (nonatomic) BOOL designatorRequiresWhitespace;
@property (nonatomic) BOOL dropLeftRedundantDesignator;
@property (nonatomic) BOOL keepRedundantDesignator;
@property (nonatomic) BOOL keepZeroMinutes;
@property (nonatomic) BOOL smallCapsAllowed;

+ (BOOL)designatorRequiresWhitespace;
+ (BOOL)dropLeftRedundantDesignator;
+ (BOOL)smallCapsAllowed;
+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorRequiresWhitespace:(BOOL)a1;

- (id)init;

@end
