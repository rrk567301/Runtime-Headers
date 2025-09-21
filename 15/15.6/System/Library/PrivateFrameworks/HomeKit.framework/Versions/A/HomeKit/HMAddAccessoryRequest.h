@class HMSetupAccessoryDescription, NSUUID, NSString, HMAccessoryCategory, NSArray, HMHome;

@interface HMAddAccessoryRequest : NSObject <HMFObject, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory;
@property (readonly, nonatomic) char requiresSetupPayloadURL;
@property (readonly, nonatomic) char requiresOwnershipToken;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 accessoryName:(id)a1 accessoryCategory:(id)a2;
- (id)payloadWithOwnershipToken:(id)a0;
- (id)payloadWithURL:(id)a0 ownershipToken:(id)a1;

@end
