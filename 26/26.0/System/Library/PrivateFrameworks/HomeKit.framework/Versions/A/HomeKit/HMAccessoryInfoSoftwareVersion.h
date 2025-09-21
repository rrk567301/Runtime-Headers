@class HMFSoftwareVersion;

@interface HMAccessoryInfoSoftwareVersion : NSObject

@property (readonly, copy) HMFSoftwareVersion *softwareVersion;

- (id)initWithProtoData:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)protoData;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSoftwareVersion:(id)a0;
- (id)protoPayload;

@end
