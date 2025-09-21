@interface PPSFileUtilities : NSObject

+ (id)containerPath;
+ (id)_debugStringForPurgeableLabel:(struct apfs_label_purgeable_request { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a0;
+ (struct apfs_label_purgeable_request { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })_purgeableLabelWithUrgency:(unsigned long long)a0 startDate:(id)a1;
+ (BOOL)markAsPurgeable:(id)a0 label:(struct apfs_label_purgeable_request { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a1;
+ (BOOL)markAsPurgeable:(id)a0 urgency:(unsigned long long)a1 startDate:(id)a2;
+ (BOOL)supportsEnhancedAPFS;

@end
