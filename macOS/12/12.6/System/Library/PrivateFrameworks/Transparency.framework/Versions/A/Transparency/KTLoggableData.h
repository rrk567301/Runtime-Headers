@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property (retain) NSData *clientData;
@property BOOL notInSyncedData;
@property (copy) NSData *deviceID;
@property (copy) NSData *signature;
@property BOOL successfulSync;
@property BOOL marked;
@property BOOL ktCapable;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientData:(id)a0;
- (void)computeHashesForSalt:(id)a0;
- (BOOL)verifySignatureWithAccountKey:(id)a0 error:(id *)a1;

@end
