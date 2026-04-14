@class NSNumber;

@interface SEMSkitInfo : SEMIndexInfo

@property (readonly, nonatomic) NSNumber *localeType;
@property (readonly, nonatomic) NSNumber *indexFeatures;

+ (id)readOnlySkitInfoAtDirectory:(id)a0;
+ (id)writableSkitInfoAtDirectory:(id)a0 error:(id *)a1;

- (void)updateIndexFeatures:(id)a0;
- (void)updateLocaleType:(id)a0;

@end
