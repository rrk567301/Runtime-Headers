@class NSString;

@interface RTEventLocationIdentifier : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *calendarIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)normalize;
- (id)initWithName:(id)a0 source:(unsigned long long)a1 calendarIdentifier:(id)a2;
- (id)initWithEvent:(id)a0 source:(unsigned long long)a1 useCalendarIdentifier:(BOOL)a2;
- (BOOL)isSuitableForFuzzyMatch;
- (long long)levenshteinDistanceToIdentifier:(id)a0;

@end
