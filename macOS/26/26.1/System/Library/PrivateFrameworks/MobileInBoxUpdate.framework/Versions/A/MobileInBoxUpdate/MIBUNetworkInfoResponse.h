@class MIBUNetworkInfo;

@interface MIBUNetworkInfoResponse : MIBUNFCResponse

@property (retain, nonatomic) MIBUNetworkInfo *networkInfo;

- (void).cxx_destruct;
- (id)serialize;
- (id)init;
- (BOOL)_deserialize:(id)a0;

@end
