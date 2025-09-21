@interface CPLResourceTransferTaskOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL shouldKeepPower;
@property (readonly, nonatomic) BOOL allowsUnsafeClientCache;
@property (readonly, nonatomic) unsigned long long intent;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL shouldBypassCaches;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) BOOL isHighPriority;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL hasValidTimeRange;

+ (id)descriptionForIntentPriority:(unsigned long long)a0;
+ (BOOL)isForegroundOperationForIntent:(unsigned long long)a0 priority:(unsigned long long)a1;
+ (id)optionsForLegacyIntent:(unsigned long long)a0;
+ (id)descriptionForIntent:(unsigned long long)a0;
+ (id)defaultOptions;
+ (id)intentsToBackgroundDownload;
+ (BOOL)isHighPriorityForIntent:(unsigned long long)a0 priority:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(unsigned long long)a0 priority:(unsigned long long)a1;
- (id)initWithHighPriority:(BOOL)a0;
- (id)initWithIntent:(unsigned long long)a0 bypassCaches:(BOOL)a1 priority:(unsigned long long)a2;
- (id)initWithIntent:(unsigned long long)a0 priority:(unsigned long long)a1 bypassCaches:(BOOL)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3;
- (id)initWithIntent:(unsigned long long)a0 priority:(unsigned long long)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (unsigned long long)legacyIntent;

@end
