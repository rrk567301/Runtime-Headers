@class NSString;

@interface RTEventLocationIdentifier : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *calendarIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)normalize;
- (id)initWithEvent:(id)a0 source:(unsigned long long)a1 useCalendarIdentifier:(char)a2;
- (id)initWithName:(id)a0 source:(unsigned long long)a1 calendarIdentifier:(id)a2;
- (char)isSuitableForFuzzyMatch;
- (long long)levenshteinDistanceToIdentifier:(id)a0;

@end
