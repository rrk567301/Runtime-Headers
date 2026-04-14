@class NSNumber;

@interface MIBUSelectResponse : MIBUNFCResponse

@property (retain, nonatomic) NSNumber *protocolVersion;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)_deserialize:(id)a0;

@end
