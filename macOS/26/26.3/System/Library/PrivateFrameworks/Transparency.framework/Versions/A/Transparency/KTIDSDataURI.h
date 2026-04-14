@class KTIDSData, KTNetworkResponse;

@interface KTIDSDataURI : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) KTIDSData *idsData;
@property (retain) KTNetworkResponse *ktResponse;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIDSData:(id)a0 ktResponse:(id)a1;

@end
