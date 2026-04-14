@class NSUUID, NSDictionary;

@interface IXDataStoreClock : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *guid;
@property (nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic) NSDictionary *notificationDictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)newClock;
+ (id)newClockWithDictionary:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)increment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithGUID:(id)a0 sequenceNumber:(unsigned long long)a1;

@end
