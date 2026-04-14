@class NSUUID, NSString;

@interface HMDDeviceAssociationInfoProto : NSObject

@property (readonly) NSUUID *accessoryUUID;
@property (readonly) NSUUID *idsIdentifier;
@property (readonly) NSString *idsDestination;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)protoData;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 idsIdentifier:(id)a1 idsDestination:(id)a2;

@end
