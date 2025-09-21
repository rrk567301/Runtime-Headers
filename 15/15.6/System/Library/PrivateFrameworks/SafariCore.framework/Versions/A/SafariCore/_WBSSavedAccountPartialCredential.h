@class NSData, NSURLProtectionSpace, NSDate;

@interface _WBSSavedAccountPartialCredential : NSObject

@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSData *persistentIdentifier;
@property (readonly, nonatomic, getter=isDefaultCredentialForProtectionSpace) char defaultCredentialForProtectionSpace;

- (void).cxx_destruct;
- (id)initWithProtectionSpace:(id)a0 modificationDate:(id)a1 creationDate:(id)a2 persistentIdentifier:(id)a3 isDefaultCredentialForProtectionSpace:(char)a4;

@end
