@class NSDateInterval;

@interface CSKLoadRange : NSObject <NSCopying>

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSDateInterval *interval;

+ (id)loadRangeWithIdentifier:(unsigned long long)a0 forSource:(id)a1;
+ (id)defaultLoadRangeForSource:(id)a0;
+ (id)intervalForIdentifier:(unsigned long long)a0 archiveSource:(id)a1;
+ (id)availableLoadRanges:(id)a0;
+ (id)localizedTitleForIdentifier:(unsigned long long)a0;
+ (BOOL)archiveHasValidStartAndEndDate:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescription;
- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 interval:(id)a1;
- (BOOL)isEqualToLoadRange:(id)a0;

@end
