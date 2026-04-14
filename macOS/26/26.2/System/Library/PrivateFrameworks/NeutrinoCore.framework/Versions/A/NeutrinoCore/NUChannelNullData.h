@interface NUChannelNullData : NUChannelData

- (long long)compare:(id)a0;
- (id)description;
- (id)value;
- (id)initWithFormat:(id)a0;
- (id)compactDescription;
- (id)init;
- (BOOL)isNull;
- (id)subdataAtIndex:(unsigned long long)a0 error:(out id *)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
