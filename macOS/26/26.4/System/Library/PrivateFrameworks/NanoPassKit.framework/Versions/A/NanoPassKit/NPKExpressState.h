@interface NPKExpressState : NSObject

@property (readonly, nonatomic) unsigned long long nfcExpressState;
@property (readonly, nonatomic) unsigned long long uwbExpressState;
@property (readonly, nonatomic) BOOL nfcExpressEnabled;
@property (readonly, nonatomic) BOOL uwbExpressEnabled;

- (id)description;
- (BOOL)expressEnabledForAllRadioTechnologiesForPass:(id)a0;
- (id)initWithExpressPassConfiguration:(id)a0;
- (id)initWithNFCState:(unsigned long long)a0 uwbState:(unsigned long long)a1;
- (unsigned long long)switchStateForMode:(unsigned long long)a0;

@end
