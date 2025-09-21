@interface NUChannelNullData : NUChannelData

- (id)compactDescription;
- (id)value;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)initWithFormat:(id)a0;
- (BOOL)isNull;
- (id)subdataAtIndex:(unsigned long long)a0 error:(out id *)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
