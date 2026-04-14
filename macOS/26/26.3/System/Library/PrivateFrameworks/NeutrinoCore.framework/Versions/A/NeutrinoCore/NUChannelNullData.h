@interface NUChannelNullData : NUChannelData

- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (id)compactDescription;
- (id)initWithFormat:(id)a0;
- (BOOL)isNull;
- (id)value;
- (id)subdataAtIndex:(unsigned long long)a0 error:(out id *)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
