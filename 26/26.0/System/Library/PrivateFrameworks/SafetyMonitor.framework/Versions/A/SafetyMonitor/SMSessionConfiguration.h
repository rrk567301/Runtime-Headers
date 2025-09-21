@class NSUUID, SMHandle, SMConversation, NSDate, SMSessionDestination, SMSessionTime;

@interface SMSessionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SMConversation *conversation;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) SMSessionTime *time;
@property (readonly, nonatomic) SMSessionDestination *destination;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *userResponseSafeDate;
@property (nonatomic) BOOL sessionSupportsHandoff;
@property (retain, nonatomic) NSUUID *sessionWorkoutIdentifier;
@property (nonatomic) unsigned long long sessionWorkoutType;
@property (nonatomic) long long sessionWorkoutMirrorType;
@property (readonly, nonatomic) SMHandle *handle;
@property (readonly, nonatomic) SMConversation *sosReceivers;

+ (BOOL)configurationIsValid:(id)a0;
+ (id)sessionTypeToString:(unsigned long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)coarseEstimatedEndDate;
- (id)estimatedEndDate;
- (id)initDestinationBoundSessionConfigurationWithConversation:(id)a0 sessionID:(id)a1 destination:(id)a2 sessionStartDate:(id)a3 userResponseSafeDate:(id)a4 sessionSupportsHandoff:(BOOL)a5 sosReceivers:(id)a6;
- (id)initRoundTripSessionConfigurationWithConversation:(id)a0 sessionID:(id)a1 destination:(id)a2 sessionStartDate:(id)a3 userResponseSafeDate:(id)a4 sessionSupportsHandoff:(BOOL)a5 sosReceivers:(id)a6;
- (id)initTimeBoundSessionConfigurationWithConversation:(id)a0 sessionID:(id)a1 time:(id)a2 sessionStartDate:(id)a3 sessionSupportsHandoff:(BOOL)a4 sosReceivers:(id)a5;
- (id)initTimeBoundSessionConfigurationWithConversation:(id)a0 sessionID:(id)a1 time:(id)a2 sessionSupportsHandoff:(BOOL)a3 sosReceivers:(id)a4;
- (id)initWithConversation:(id)a0 sessionID:(id)a1 sessionStartDate:(id)a2 sessionType:(unsigned long long)a3 time:(id)a4 destination:(id)a5 userResponseSafeDate:(id)a6 sessionSupportsHandoff:(BOOL)a7 sosReceivers:(id)a8 sessionWorkoutIdentifier:(id)a9 sessionWorkoutType:(unsigned long long)a10 sessionWorkoutMirrorType:(long long)a11;
- (id)initWorkoutBoundSessionConfigurationWithConversation:(id)a0 sessionID:(id)a1 sessionStartDate:(id)a2 sessionSupportsHandoff:(BOOL)a3 sosReceivers:(id)a4 sessionWorkoutIdentifier:(id)a5 sessionWorkoutType:(unsigned long long)a6 sessionWorkoutMirrorType:(long long)a7;
- (BOOL)isSameSession:(id)a0;
- (id)outputToDictionary;
- (id)copyConfigurationWithNewSessionID:(id)a0;

@end
