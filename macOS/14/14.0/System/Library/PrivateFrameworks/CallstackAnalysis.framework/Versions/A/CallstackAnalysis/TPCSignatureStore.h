@class NSString, NSMutableArray, NSMutableDictionary;

@interface TPCSignatureStore : NSObject {
    NSMutableArray *roots;
    NSMutableDictionary *SignatureStoreDict;
    unsigned long long total_logs;
    unsigned long long total_SO_objects;
    unsigned long long total_3P_SO_objects;
    unsigned long long total_unique_frames;
    unsigned long long total_unsymbolicated_frames;
    unsigned long long total_unsymbolicated_3P_frames;
    NSString *start_frame;
}

+ (id)isValidLogSchema:(id)a0 logFormat:(unsigned long long)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addObjectInHSSForKey:(id)a0 object:(id)a1;
- (id)getRoots;
- (id)initSignatureLogStore;
- (id)isSignatureStoreUsable:(id *)a0;
- (BOOL)isValidSignatureStoreInvariant;
- (id)lookupFrameInSignatureStore:(id)a0;
- (id)populateSignatureStore:(id)a0 logFormat:(unsigned long long)a1 formatVersion:(unsigned long long)a2 error:(id *)a3;

@end
