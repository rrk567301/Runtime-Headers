@class NSData, OptInOut, NSMutableArray, IdsDeviceMutation;

@interface IdsMutation : TLSMessage <TLSMessage>

@property unsigned char mutationVersion;
@property unsigned char mutationType;
@property unsigned long long mutationMs;
@property (retain) NSData *uriVRFOutput;
@property (retain) OptInOut *optInOut;
@property (retain) IdsDeviceMutation *idsDeviceMutation;
@property (retain) NSMutableArray *extensions;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (id)debugDescription;
- (id)init;
- (id)data;
- (void).cxx_destruct;

@end
