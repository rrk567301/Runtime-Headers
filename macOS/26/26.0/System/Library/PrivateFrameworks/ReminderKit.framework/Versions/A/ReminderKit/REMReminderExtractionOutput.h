@class NSArray;

@interface REMReminderExtractionOutput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *suggestedTitles;
@property (readonly, nonatomic) BOOL isClassifiedAsRecipe;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestedTitles:(id)a0 isClassifiedAsRecipe:(BOOL)a1;

@end
