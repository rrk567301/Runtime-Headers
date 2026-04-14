@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject

@property (nonatomic) long long day;
@property (readonly, nonatomic) NSMutableSet *events;

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDay:(long long)a0;

@end
