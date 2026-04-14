@class NSMutableArray, NSDate;

@interface EKInviteeTimeSpan : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSMutableArray *conflictedParticipants;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
