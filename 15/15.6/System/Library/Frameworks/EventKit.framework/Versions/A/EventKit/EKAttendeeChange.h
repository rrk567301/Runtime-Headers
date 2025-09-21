@class EKObjectID, NSString;

@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;
@property (readonly, nonatomic) char attendeeRole;
@property (readonly, nonatomic) char attendeeStatus;
@property (readonly, nonatomic) NSString *attendeeEmailAddress;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
