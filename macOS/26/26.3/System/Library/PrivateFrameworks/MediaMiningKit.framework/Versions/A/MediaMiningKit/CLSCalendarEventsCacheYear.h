@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject

@property (nonatomic) long long year;
@property (readonly, nonatomic) NSMutableSet *months;

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithYear:(long long)a0;

@end
