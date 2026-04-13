@class NSString, NSDate;

@interface CalFreeBusyEventDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *title;
@property (retain) NSString *uid;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
