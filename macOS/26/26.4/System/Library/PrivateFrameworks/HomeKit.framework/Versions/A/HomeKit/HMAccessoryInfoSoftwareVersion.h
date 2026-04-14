@class HMFSoftwareVersion;

@interface HMAccessoryInfoSoftwareVersion : NSObject

@property (readonly, copy) HMFSoftwareVersion *softwareVersion;

- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)protoData;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSoftwareVersion:(id)a0;
- (id)protoPayload;

@end
