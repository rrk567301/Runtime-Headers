@class NSError;

@interface MIBUNFCResponse : NSObject

@property (nonatomic) BOOL rejected;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)serialize;
- (id)init;
- (id)initWithResponsePayload:(id)a0;
- (BOOL)_deserialize:(id)a0;

@end
