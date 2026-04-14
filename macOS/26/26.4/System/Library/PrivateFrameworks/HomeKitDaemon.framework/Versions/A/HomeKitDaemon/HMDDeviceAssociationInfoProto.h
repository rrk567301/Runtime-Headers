@class NSUUID, NSString;

@interface HMDDeviceAssociationInfoProto : NSObject

@property (readonly) NSUUID *accessoryUUID;
@property (readonly) NSUUID *idsIdentifier;
@property (readonly) NSString *idsDestination;

- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)protoData;
- (id)initWithProtoPayload:(id)a0;
- (id)protoPayload;
- (id)initWithAccessoryUUID:(id)a0 idsIdentifier:(id)a1 idsDestination:(id)a2;

@end
