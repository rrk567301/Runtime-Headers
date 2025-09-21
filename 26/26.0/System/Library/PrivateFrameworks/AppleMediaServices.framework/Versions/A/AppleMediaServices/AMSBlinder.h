@interface AMSBlinder : NSObject

+ (id)unblindedInputWithPrivateInput:(id)a0;
+ (id)finalizeBlindedDataWithPrivateInput:(id)a0 timeStamp:(id)a1 adamId:(id)a2 publicInput:(id)a3 signatureType:(id)a4 serverData:(id)a5 error:(id *)a6;
+ (id)generateRandomPrivateInput;
+ (id)generateTimestamp;
+ (id)makeBlindedDataWithPrivateInputData:(id)a0;
+ (id)publicInputWithComponents:(id)a0 adamID:(id)a1 isRedownload:(BOOL)a2 priceType:(id)a3 timestamp:(id)a4;
+ (void)removeCachedClientForPrivateInput:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
