@class NSData, NSString, NSDate;

@interface CWFDriverAvailabilityMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *rawEventData;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL available;
@property (nonatomic) long long flags;
@property (readonly, nonatomic) BOOL availabilityFlagIsRetry;
@property (readonly, nonatomic) BOOL availabilityFlagIsNonFatal;
@property (readonly, nonatomic) BOOL availabilityFlagHasTrapInfo;
@property (readonly, nonatomic) BOOL availabilityFlagHasJoinTimeoutInfo;
@property (readonly, nonatomic) BOOL availabilityFlagHasTrapCrashTracerMiniDump;
@property (readonly, nonatomic) BOOL availabilityFlagFwLoaded;
@property (nonatomic) long long event_id;
@property (nonatomic) long long reason;
@property (copy, nonatomic) NSString *reasonString;
@property (nonatomic) long long sub_reason;
@property (nonatomic) long long minor_reason;
@property (nonatomic) long long trapInfoSequenceNum;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDriverAvailabiltyData:(id)a0;
- (BOOL)isEqualToDriverAvailabiltyMessage:(id)a0;

@end
