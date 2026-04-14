@class NSError;

@interface MIBUNFCResponse : NSObject

@property (nonatomic) BOOL rejected;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithResponsePayload:(id)a0;
- (BOOL)_deserialize:(id)a0;

@end
