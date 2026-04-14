@class NSNumber;

@interface MIBUSelectResponse : MIBUNFCResponse

@property (retain, nonatomic) NSNumber *protocolVersion;

- (id)serialize;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_deserialize:(id)a0;

@end
