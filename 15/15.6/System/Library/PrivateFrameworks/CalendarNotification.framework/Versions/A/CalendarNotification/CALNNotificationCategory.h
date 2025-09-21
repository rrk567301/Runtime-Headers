@class NSString, NSArray;

@interface CALNNotificationCategory : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (readonly, copy) NSString *categorySummaryFormat;

+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3 categorySummaryFormat:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewsBodyPlaceholder:(id)a2 options:(unsigned long long)a3 categorySummaryFormat:(id)a4;
- (char)isEqualToCategory:(id)a0;

@end
