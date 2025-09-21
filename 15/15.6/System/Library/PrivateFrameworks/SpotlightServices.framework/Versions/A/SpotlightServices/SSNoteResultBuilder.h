@class NSString, NSDate;

@interface SSNoteResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *title;
@property (nonatomic) char isShared;
@property (nonatomic) char isLocked;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *formattedBody;
@property (retain, nonatomic) NSString *folder;
@property (retain, nonatomic) NSString *account;

+ (id)bundleId;
+ (char)isCoreSpotlightResult;
+ (char)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildTitle;

@end
