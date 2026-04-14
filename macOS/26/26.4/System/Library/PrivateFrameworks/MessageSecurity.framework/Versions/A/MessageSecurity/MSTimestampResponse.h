@class MSOID, MSMessageImprint, NSString, NSData, MSPKIStatusInfo, NSDate, MSCMSSignedData;

@interface MSTimestampResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) MSMessageImprint *messageImprint;
@property (retain) NSData *serialNumber;
@property (retain) NSString *tsa;
@property (retain) MSOID *tsaPolicyID;
@property long long version;
@property (retain) MSPKIStatusInfo *status;
@property (retain) NSDate *timestamp;
@property (retain) NSData *nonce;
@property (retain) MSCMSSignedData *timeStampToken;
@property (retain) NSData *timestampResponse;

- (id)debugDescription;
- (id)init:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)verifyWithMessageImprint:(id)a0 error:(id *)a1;
- (BOOL)isEqualToTimestampResponse:(id)a0 error:(id *)a1;
- (long long)parseFailureInfo:(struct PKIFailureInfo { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; } *)a0;
- (id)parseTSAFromGeneralName:(struct GeneralName { int x0; union { struct GeneralName_otherName { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; } x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; struct heim_base_data { unsigned long long x0; void *x1; } x2; struct GeneralName_directoryName { int x0; union { struct RDNSequence { unsigned int x0; struct RelativeDistinguishedName *x1; } x0; } x1; } x3; struct heim_base_data { unsigned long long x0; void *x1; } x4; struct heim_base_data { unsigned long long x0; void *x1; } x5; struct heim_oid { unsigned long long x0; unsigned int *x1; } x6; } x1; } *)a0;
- (BOOL)parseTSTInfo:(id)a0 error:(id *)a1;
- (BOOL)parseTimeStampToken:(id)a0 error:(id *)a1;
- (BOOL)parseTimestampResponse:(id *)a0;
- (BOOL)verifyWithRequest:(id)a0 error:(id *)a1;

@end
