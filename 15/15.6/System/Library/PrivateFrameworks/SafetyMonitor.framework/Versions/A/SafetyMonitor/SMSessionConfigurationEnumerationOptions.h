@class NSArray, NSUUID, NSDateInterval, NSDateComponents, CLLocation, NSNumber;

@interface SMSessionConfigurationEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) char sortBySessionStartDate;
@property (readonly, nonatomic) char ascending;
@property (readonly, nonatomic) NSArray *sessionTypes;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, nonatomic) NSDateComponents *endDateComponents;
@property (readonly, nonatomic) NSDateInterval *timeInADayInterval;
@property (readonly, nonatomic) char pickOneConfigInTimeInADayInterval;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) CLLocation *startBoundingBoxLocation;
@property (copy, nonatomic) CLLocation *destinationBoundingBoxLocation;
@property (copy, nonatomic) NSNumber *boundingBoxRadius;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (Class)enumeratedType;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 sortBySessionStartDate:(char)a2 ascending:(char)a3 sessionTypes:(id)a4 timeInADayInterval:(id)a5 pickOneConfigInTimeInADayInterval:(char)a6 dateInterval:(id)a7 startBoundingBoxLocation:(id)a8 destinationBoundingBoxLocation:(id)a9 boundingBoxRadius:(id)a10 sessionIdentifier:(id)a11;

@end
