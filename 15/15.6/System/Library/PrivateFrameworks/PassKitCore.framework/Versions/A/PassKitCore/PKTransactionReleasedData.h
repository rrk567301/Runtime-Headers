@class NSString, NSSet, NSURL, NSData, PKTransactionReleasedDataApplication;

@interface PKTransactionReleasedData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSSet *elements;
@property (retain, nonatomic) PKTransactionReleasedDataApplication *application;
@property (retain, nonatomic) NSURL *privacyPolicyURL;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSString *merchantNameOverride;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)verificationType;
- (id)initWithDocumentType:(id)a0;
- (char)isAgeVerificationElement:(id)a0;
- (char)isEqualToReleasedData:(id)a0;
- (char)isPortraitElement:(id)a0;

@end
