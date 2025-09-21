@class NSString, BDSReadingHistoryDayInfo;

@interface BDSReadingHistoryDayEntryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *date;
@property (retain, nonatomic) BDSReadingHistoryDayInfo *day;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 day:(id)a1;

@end
