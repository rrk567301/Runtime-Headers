@class NSString, NSArray, NSDate, CLLocation;

@interface CLSEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSArray *performers;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic, getter=hasMeetingRoom) char meetingRoom;
@property (nonatomic, getter=isOrganizedByMe) char organizedByMe;
@property (nonatomic, getter=isAccepted) char accepted;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
