@class NSString;

@interface AKPasswordCredential : NSObject <AKCredential>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
