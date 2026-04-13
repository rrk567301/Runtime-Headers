@class CALTimeRange;

@interface CALFreeBusyTime : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int freeBusyType;
@property (retain) CALTimeRange *freeBusyTimeRange;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimeRange:(id)a0;
- (id)freeBusyDateRange;
- (id)initWithDateRange:(id)a0;

@end
