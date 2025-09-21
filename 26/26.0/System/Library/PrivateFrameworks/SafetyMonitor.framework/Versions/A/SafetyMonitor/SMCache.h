@class GEOLocationShifter, NSSet, NSArray, SMDeviceStatus, NSData, NSUUID, SMLocation;

@interface SMCache : NSObject <NSSecureCoding, NSCopying> {
    GEOLocationShifter *_shifter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SMDeviceStatus *deviceStatus;
@property (retain, nonatomic) NSSet *locationsDuringSession;
@property (retain, nonatomic) SMLocation *unlockLocation;
@property (retain, nonatomic) SMLocation *lockLocation;
@property (retain, nonatomic) SMLocation *mostRecentLocation;
@property (retain, nonatomic) SMLocation *startingLocation;
@property (retain, nonatomic) SMLocation *offWristLocation;
@property (retain, nonatomic) SMLocation *parkedCarLocation;
@property (retain, nonatomic) NSData *destinationMapItem;
@property (retain, nonatomic) NSArray *workoutEvents;
@property (readonly, copy, nonatomic) NSUUID *identifier;

+ (void)logNoCacheDataForSessionID:(id)a0 role:(id)a1 deviceType:(id)a2 transaction:(id)a3;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)identifierHash;
- (id)initWithIdentifier:(id)a0 deviceStatus:(id)a1 locationsDuringSession:(id)a2 unlockLocation:(id)a3 lockLocation:(id)a4 mostRecentLocation:(id)a5 startingLocation:(id)a6 offWristLocation:(id)a7 parkedCarLocation:(id)a8 destinationMapItem:(id)a9 workoutEvents:(id)a10;
- (void)logCacheForSessionID:(id)a0 role:(id)a1 deviceType:(id)a2 transaction:(id)a3 hashString:(id)a4;
- (id)outputToDictionary;
- (void)shiftLocation:(id)a0 queue:(id)a1 withHandler:(id /* block */)a2;
- (void)shiftLocationsOnQueue:(id)a0 handler:(id /* block */)a1;
- (BOOL)shiftRequiredForLocation:(id)a0;

@end
