@interface NUChannelNullData : NUChannelData

- (long long)compare:(id)a0;
- (id)initWithFormat:(id)a0;
- (BOOL)isNull;
- (id)value;
- (id)compactDescription;
- (id)description;
- (id)init;
- (id)subdataAtIndex:(unsigned long long)a0 error:(out id *)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
