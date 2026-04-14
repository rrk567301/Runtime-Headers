@class NSNumber;

@interface MIBUSelectResponse : MIBUNFCResponse

@property (retain, nonatomic) NSNumber *protocolVersion;

- (void).cxx_destruct;
- (id)serialize;
- (id)init;
- (BOOL)_deserialize:(id)a0;

@end
