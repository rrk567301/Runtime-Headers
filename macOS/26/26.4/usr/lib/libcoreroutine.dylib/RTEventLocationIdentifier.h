@class NSString;

@interface RTEventLocationIdentifier : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *calendarIdentifier;

+ (BOOL)areCalendarIdentifiersEqual:(id)a0 otherCalendarId:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)normalize;
- (id)initWithEvent:(id)a0 source:(unsigned long long)a1 useCalendarIdentifier:(BOOL)a2;
- (id)initWithName:(id)a0 source:(unsigned long long)a1 calendarIdentifier:(id)a2;

@end
