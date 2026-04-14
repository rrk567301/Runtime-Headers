@class NSString, NSArray;

@interface CALNNotificationCategory : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (readonly, copy) NSString *categorySummaryFormat;

+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3 categorySummaryFormat:(id)a4;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCategory:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3 categorySummaryFormat:(id)a4;
- (id)description;

@end
