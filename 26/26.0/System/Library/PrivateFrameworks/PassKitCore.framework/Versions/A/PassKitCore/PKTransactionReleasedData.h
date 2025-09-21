@class NSString, NSSet, NSURL, NSData, PKTransactionReleasedDataApplication;

@interface PKTransactionReleasedData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSSet *elements;
@property (retain, nonatomic) PKTransactionReleasedDataApplication *application;
@property (retain, nonatomic) NSURL *privacyPolicyURL;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSString *merchantNameOverride;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)verificationType;
- (id)initWithDocumentType:(id)a0;
- (BOOL)isAgeVerificationElement:(id)a0;
- (BOOL)isEqualToReleasedData:(id)a0;
- (BOOL)isPortraitElement:(id)a0;

@end
