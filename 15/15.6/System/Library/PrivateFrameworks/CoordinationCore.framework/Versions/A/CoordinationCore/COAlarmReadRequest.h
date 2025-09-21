@class NSUUID, NSString;

@interface COAlarmReadRequest : COMeshRequest

@property (readonly, nonatomic) NSUUID *accessoryUniqueIdentifier;
@property (readonly, nonatomic) char isForMerge;
@property (retain, nonatomic) NSString *eTag;
@property (readonly, nonatomic) char requiresFilter;

+ (char)supportsSecureCoding;
+ (id)acceptableResponses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessory:(id)a0;
- (id)initForMerge;
- (id)initWithAccessoryUniqueIdentifier:(id)a0;
- (id)initWithAccessoryUniqueIdentifier:(id)a0 requiresFilter:(char)a1;

@end
