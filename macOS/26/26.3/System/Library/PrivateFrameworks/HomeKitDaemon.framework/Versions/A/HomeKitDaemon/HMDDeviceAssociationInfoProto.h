@class NSUUID, NSString;

@interface HMDDeviceAssociationInfoProto : NSObject

@property (readonly) NSUUID *accessoryUUID;
@property (readonly) NSUUID *idsIdentifier;
@property (readonly) NSString *idsDestination;

- (id)description;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)protoData;
- (id)initWithProtoPayload:(id)a0;
- (id)protoPayload;
- (id)initWithAccessoryUUID:(id)a0 idsIdentifier:(id)a1 idsDestination:(id)a2;

@end
