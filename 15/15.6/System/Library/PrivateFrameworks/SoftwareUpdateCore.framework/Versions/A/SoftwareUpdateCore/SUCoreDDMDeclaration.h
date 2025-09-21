@class NSString, NSDictionary, SUCoreDevice, NSDate;

@interface SUCoreDDMDeclaration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *declarationKey;
@property (retain, nonatomic) NSDate *enforcedInstallDate;
@property (retain, nonatomic) NSString *versionString;
@property (retain, nonatomic) NSString *buildVersionString;
@property (retain, nonatomic) NSString *detailsURL;
@property (retain, nonatomic) NSString *companyName;
@property (retain, nonatomic) NSDictionary *additionalOptions;
@property (nonatomic) char enableNotifications;
@property (retain, nonatomic) SUCoreDevice *device;

- (id)copy;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)_dateFromString:(id)a0;
- (id)_stringFromDate:(id)a0;
- (id)initWithDeclarationKeys:(id)a0;
- (char)isValidDeclaration;
- (char)isInstallOverdue;
- (char)isValidDeclarationWithReason:(id *)a0;

@end
