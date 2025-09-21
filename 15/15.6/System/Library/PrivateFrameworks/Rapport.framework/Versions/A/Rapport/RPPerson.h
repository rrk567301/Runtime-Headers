@class NSString, NSMutableDictionary, NSArray, CURangingMeasurement;

@interface RPPerson : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *deviceDict;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int activityLevel;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int proximity;
@property (readonly) CURangingMeasurement *relativeLocation;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (unsigned int)removeRPDevice:(id)a0;
- (unsigned int)_updateDeviceDerivedInfo;
- (unsigned int)updateWithRPDevice:(id)a0;

@end
