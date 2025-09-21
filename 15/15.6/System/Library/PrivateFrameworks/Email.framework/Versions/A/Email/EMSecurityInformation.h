@class NSArray, NSError, NSString;

@interface EMSecurityInformation : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isEncrypted;
@property (readonly, nonatomic) char isSigned;
@property (readonly, nonatomic) NSArray *signers;
@property (readonly, nonatomic) char hasEncryptedDescendantPart;
@property (readonly, nonatomic) NSError *smimeError;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
