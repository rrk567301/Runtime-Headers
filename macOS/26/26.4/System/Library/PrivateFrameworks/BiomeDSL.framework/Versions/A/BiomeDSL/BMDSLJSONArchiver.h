@interface BMDSLJSONArchiver : NSCoder

+ (id)archivedDataWithObject:(id)a0;
+ (id)archivedStringWithObject:(id)a0;
+ (id)archivedDataWithDSL:(id)a0;
+ (void)registerJSONTransformers;
+ (id)archivedStringWithDSL:(id)a0;
+ (id)archiveCompatibleObjectWithObject:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2;

@end
