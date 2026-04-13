@class NSMutableArray, NSObject;

@interface IdsMapLeaf : TLSMessage <TransparencyVerifiable, TLSMessage>

@property (retain) NSObject *verifier;
@property (retain) NSMutableArray *accountsArray;
@property (retain) NSMutableArray *extensions;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (id)debugDescription;
- (id)init;
- (id)data;
- (void).cxx_destruct;
- (unsigned long long)verifyWithError:(id *)a0;
- (id)recordForAccountKeyHash:(id)a0 deviceIdHash:(id)a1 appVersion:(unsigned long long)a2 clientDataHash:(id)a3;

@end
