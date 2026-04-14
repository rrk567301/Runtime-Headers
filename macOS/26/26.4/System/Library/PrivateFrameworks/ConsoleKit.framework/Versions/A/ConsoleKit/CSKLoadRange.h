@class NSDateInterval;

@interface CSKLoadRange : NSObject <NSCopying>

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSDateInterval *interval;

+ (BOOL)archiveHasValidStartAndEndDate:(id)a0;
+ (id)availableLoadRanges:(id)a0;
+ (id)defaultLoadRangeForSource:(id)a0;
+ (id)intervalForIdentifier:(unsigned long long)a0 archiveSource:(id)a1;
+ (id)loadRangeWithIdentifier:(unsigned long long)a0 forSource:(id)a1;
+ (id)localizedTitleForIdentifier:(unsigned long long)a0;

- (id)localizedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(unsigned long long)a0 interval:(id)a1;
- (BOOL)isEqualToLoadRange:(id)a0;

@end
