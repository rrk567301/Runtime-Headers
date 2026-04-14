@interface SKDPipelineQueryBuilder : NSObject

+ (id)queryForItemsFromBundles:(id)a0 inverse:(BOOL)a1;
+ (id)queryForItemsFromProtectionClasses:(id)a0 inverse:(BOOL)a1;
+ (id)queryForItemsNeedingProcessingByPipelineWithName:(id)a0 inverse:(BOOL)a1;
+ (id)queryForItemsProcessedByPipelineWithName:(id)a0 inverse:(BOOL)a1;
+ (id)queryForValidItems;

@end
