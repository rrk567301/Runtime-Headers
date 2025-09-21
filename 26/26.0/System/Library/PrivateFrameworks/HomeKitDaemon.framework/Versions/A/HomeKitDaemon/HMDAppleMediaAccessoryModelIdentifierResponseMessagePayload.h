@class NSUUID, NSString;

@interface HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload : HMFObject <HMMessageEncoding>

@property (readonly, copy) NSUUID *modelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)attributeDescriptions;
- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelIdentifier:(id)a0;
- (id)payloadCopy;

@end
