@class NSString;

@interface PKSharingIDSChannelDescriptor : PKSharingChannelDescriptor

@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *sessionIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)createWithDeviceIdentifier:(id)a0;
+ (id)createWithDeviceIdentifier:(id)a0 serviceType:(unsigned long long)a1;
+ (id)createWithRemoteAddress:(id)a0;
+ (id)createWithRemoteAddress:(id)a0 serviceType:(unsigned long long)a1;
+ (id)existingForSessionIdentifier:(id)a0;
+ (id)existingForSessionIdentifier:(id)a0 serviceType:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithSessionIdentifier:(id)a0 deviceIdentifier:(id)a1 subtype:(unsigned long long)a2 serviceType:(unsigned long long)a3;
- (id)initWithSessionIdentifier:(id)a0 deviceIdentifier:(id)a1;

@end
