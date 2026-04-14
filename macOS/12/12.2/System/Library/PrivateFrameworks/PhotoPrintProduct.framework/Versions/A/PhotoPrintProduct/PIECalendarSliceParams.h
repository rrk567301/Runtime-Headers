@class NSArray, NSDateComponents, NSString;

@interface PIECalendarSliceParams : NSObject <NSCopying>

@property (readonly, nonatomic) NSDateComponents *sliceDateComponents;
@property (nonatomic) long long targetHoleCount;
@property (retain, nonatomic) NSArray *addressBookBirthdayInfos;
@property (retain, nonatomic) NSArray *nationalHolidayInfos;
@property (readonly, nonatomic) NSString *calendarSliceDateString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDateComponents:(id)a0;

@end
