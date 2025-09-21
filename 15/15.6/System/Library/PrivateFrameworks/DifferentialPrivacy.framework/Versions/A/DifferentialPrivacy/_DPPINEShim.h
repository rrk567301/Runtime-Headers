@interface _DPPINEShim : NSObject

+ (char)isValidNumOfProofs:(unsigned long long)a0;
+ (char)isValidPINEType:(unsigned long long)a0;
+ (char)isValidWraparoundCheckCount:(unsigned long long)a0;
+ (id)shard:(id)a0 parameter:(id)a1 error:(id *)a2;

- (id)init;

@end
