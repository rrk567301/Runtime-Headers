@class NSData, IdsMutation;

@interface IdsDeviceMutation : TLSMessage <TLSMessage>

@property unsigned long long parsedLength;
@property (weak) IdsMutation *idsMutation;
@property (retain) NSData *accountKeyHash;
@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property unsigned long long appVersion;
@property BOOL accountMismatch;
@property unsigned long long expiryMs;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (id)description;
- (id)debugDescription;
- (id)init;
- (id)data;
- (void).cxx_destruct;

@end
