@class NSString, NSDate;

@interface SSNoteResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *lastOpenDate;
@property (retain, nonatomic) NSDate *modificationDate;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildInlineCardSection;
- (id)buildCompactCardSection;

@end
