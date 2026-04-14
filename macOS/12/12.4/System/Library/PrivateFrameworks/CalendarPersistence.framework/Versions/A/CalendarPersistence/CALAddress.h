@class NSManagedObjectID;

@interface CALAddress : CALPropertyValue {
    BOOL _isCalendarUserAddress;
    BOOL _isMe;
}

@property (retain) id container;
@property (retain) NSManagedObjectID *managedObjectID;

+ (id)addressWithMailString:(id)a0;
+ (id)addressWithNoMail;
+ (id)addressWithURL:(id)a0;
+ (id)addressWithAddressServicesUID:(id)a0;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (int)role;
- (id)member;
- (id)address;
- (int)userType;
- (id)email;
- (void)setRole:(int)a0;
- (int)participationStatus;
- (id)commonName;
- (void)setCommonName:(id)a0;
- (void)setEmail:(id)a0;
- (BOOL)rsvp;
- (int)scheduleAgent;
- (void)setScheduleAgent:(int)a0;
- (BOOL)scheduleForceSend;
- (void)setScheduleForceSend:(BOOL)a0;
- (void)setParticipationStatus:(int)a0;
- (id)justEmailAddress;
- (BOOL)isSimilarTo:(id)a0;
- (void)setRSVP:(BOOL)a0;
- (id)initWithMailString:(id)a0;
- (id)initWithAddressServicesUID:(id)a0;
- (id)addressURIAsString;
- (BOOL)isSameAddressAs:(id)a0;
- (BOOL)hasMail;
- (void)setDirectoryEntry:(id)a0;
- (id)directoryEntry;
- (void)removeUserType;
- (void)setUserType:(int)a0;
- (void)setScheduleStatus:(int)a0;
- (int)scheduleStatus;
- (void)removeRole;
- (void)setIsSelfInvited:(BOOL)a0;
- (BOOL)isSelfInvited;
- (void)setSentBy:(id)a0;
- (id)sentBy;
- (void)setDelegatedFrom:(id)a0;
- (id)delegatedFrom;
- (void)setDelegatedTo:(id)a0;
- (id)delegatedTo;
- (void)setMember:(id)a0;
- (id)addressForMail;
- (id)addressForCommonName;

@end
