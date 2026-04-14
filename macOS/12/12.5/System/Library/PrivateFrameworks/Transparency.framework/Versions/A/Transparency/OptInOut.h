@class IdsMutation;

@interface OptInOut : TLSMessage <TLSMessage>

@property unsigned long long parsedLength;
@property (weak) IdsMutation *idsMutation;
@property BOOL optIn;
@property unsigned long long timestampMs;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (id)debugDescription;
- (id)init;
- (id)data;
- (void).cxx_destruct;

@end
