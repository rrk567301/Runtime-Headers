@class NSString, NSSet, NSDate;

@interface AXPSignpostParserConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *logArchivePath;
@property (copy, nonatomic) NSSet *subsystemCategoryFilters;
@property (retain, nonatomic) NSDate *beginTime;
@property (retain, nonatomic) NSDate *endTime;
@property (copy, nonatomic) NSSet *nameFilters;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
