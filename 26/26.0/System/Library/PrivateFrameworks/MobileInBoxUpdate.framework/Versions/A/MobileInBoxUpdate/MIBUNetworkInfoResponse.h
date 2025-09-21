@class MIBUNetworkInfo;

@interface MIBUNetworkInfoResponse : MIBUNFCResponse

@property (retain, nonatomic) MIBUNetworkInfo *networkInfo;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)_deserialize:(id)a0;

@end
