@class HMFSoftwareVersion;

@interface HMAccessoryInfoSoftwareVersion : NSObject

@property (readonly, copy) HMFSoftwareVersion *softwareVersion;

- (id)description;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)protoData;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSoftwareVersion:(id)a0;
- (id)protoPayload;

@end
