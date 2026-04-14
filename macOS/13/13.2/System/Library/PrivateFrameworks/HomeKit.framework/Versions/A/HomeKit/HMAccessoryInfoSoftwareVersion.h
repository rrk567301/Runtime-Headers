@class HMFSoftwareVersion;

@interface HMAccessoryInfoSoftwareVersion : NSObject

@property (readonly, copy) HMFSoftwareVersion *softwareVersion;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)protoData;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithSoftwareVersion:(id)a0;

@end
