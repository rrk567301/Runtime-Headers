@class NSString, NSDate;

@interface MOContextTimeMetaData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *timeReferenceString;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeReferenceString:(id)a2;
- (id)initWithTimeReferenceString:(id)a0;

@end
