@class NSUUID, NSString;

@interface HMICamera : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *name;
@property (readonly) char hasBattery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 name:(id)a1 manufacturer:(id)a2 model:(id)a3 firmwareVersion:(id)a4 hasBattery:(char)a5;
- (id)initWithIdentifier:(id)a0 name:(id)a1 manufacturer:(id)a2 model:(id)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 manufacturer:(id)a2 model:(id)a3 firmwareVersion:(id)a4;

@end
