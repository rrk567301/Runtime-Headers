@interface NUChannelNullData : NUChannelData

- (id)compactDescription;
- (id)initWithFormat:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)value;
- (BOOL)isNull;
- (id)description;
- (id)subdataAtIndex:(unsigned long long)a0 error:(out id *)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
