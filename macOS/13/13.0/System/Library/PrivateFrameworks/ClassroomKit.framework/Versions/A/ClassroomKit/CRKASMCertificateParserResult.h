@class NSError, NSString;

@interface CRKASMCertificateParserResult : NSObject

@property (readonly, nonatomic) NSError *validationError;
@property (readonly, copy, nonatomic) NSString *userIdentifier;

+ (id)resultForCertificate:(id)a0 expectedCommonNamePrefix:(id)a1 expectedUserIdentifier:(id)a2;
+ (BOOL)certificate:(id)a0 hasCommonNameWithPrefix:(id)a1;

- (void).cxx_destruct;
- (id)initWithUserIdentifier:(id)a0 validationError:(id)a1;
- (BOOL)isCertificateValidWithError:(id *)a0;

@end
