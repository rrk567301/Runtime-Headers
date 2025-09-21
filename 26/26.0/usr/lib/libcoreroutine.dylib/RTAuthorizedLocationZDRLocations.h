@class NSString, NSUUID, NSDate;

@interface RTAuthorizedLocationZDRLocations : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *zdrLocationUUID;
@property (retain, nonatomic) NSDate *zdrLocationDbEntryTimeCfatSec;
@property (nonatomic) double zdrLocationLatitudeDeg;
@property (nonatomic) double zdrLocationLongitudeDeg;
@property (nonatomic) unsigned long long zdrLocationType;
@property (retain, nonatomic) NSDate *zdrLocationLastSeenTimeCfatSec;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithAuthorizedZDRLocationMO:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithZDRLocation:(id)a0 zdrLocationDbEntryTimeCfatSec:(id)a1 zdrLocationType:(unsigned long long)a2 zdrLocationLatitudeDeg:(double)a3 zdrLocationLongitudeDeg:(double)a4 zdrLocationLastSeenTimeCfatSec:(id)a5;

@end
