@interface LASRPManager : NSObject {
    void /* unknown type, empty encoding */ properties;
}

+ (id)makeManagerWithUUID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addVerifierWithIdentifier:(id)a0 data:(id)a1 iterations:(long long)a2 salt:(id)a3 error:(id *)a4;
- (BOOL)addVerifierWithIdentifier:(id)a0 password:(id)a1 error:(id *)a2;
- (id)bootstrapSessionForVerifierWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteVerifierWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithUuid:(id)a0;

@end
