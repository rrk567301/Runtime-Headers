@class MIBUNetworkInfo;

@interface MIBUNetworkInfoResponse : MIBUNFCResponse

@property (retain, nonatomic) MIBUNetworkInfo *networkInfo;

- (id)serialize;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_deserialize:(id)a0;

@end
