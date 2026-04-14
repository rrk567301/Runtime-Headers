@class NSString, NSMutableArray, NSMutableDictionary;

@interface TPCSignatureStore : NSObject {
    NSMutableArray *roots;
    NSMutableDictionary *SignatureStoreDict;
    NSMutableArray *substringToFrameDictArray;
    unsigned long long total_logs;
    unsigned long long total_SO_objects;
    unsigned long long total_3P_SO_objects;
    unsigned long long total_unique_frames;
    unsigned long long total_unsymbolicated_frames;
    unsigned long long total_unsymbolicated_3P_frames;
    unsigned long long total_3P_symbolicated_logs;
    NSString *start_frame;
}

+ (long long)editDistance:(id)a0 backtraceString:(id)a1;
+ (BOOL)isApproximateMatch:(id)a0 backtraceString:(id)a1 threshold:(long long)a2 distancePercentage:(long long *)a3;
+ (id)isValidLogSchema:(id)a0 logFormat:(unsigned long long)a1 error:(id *)a2;
+ (id)supportedFormatTypes;

- (id)init;
- (void).cxx_destruct;
- (void)addFrameToSubstringMap:(id)a0;
- (void)addObjectInHSSForKey:(id)a0 object:(id)a1;
- (id)getRoots;
- (id)initSignatureLogStore;
- (id)isSignatureStoreUsable:(id *)a0;
- (BOOL)isValidSignatureStoreInvariant;
- (id)lookupApproximateFrameInSignatureStore:(id)a0 threshold:(long long)a1 distancePercentage:(long long *)a2;
- (id)lookupFrameInSignatureStore:(id)a0;
- (id)populateSignatureStore:(id)a0 logFormat:(unsigned long long)a1 formatVersion:(unsigned long long)a2 error:(id *)a3;

@end
