@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject

@property (nonatomic) long long month;
@property (readonly, nonatomic) NSMutableSet *days;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithMonth:(long long)a0;

@end
