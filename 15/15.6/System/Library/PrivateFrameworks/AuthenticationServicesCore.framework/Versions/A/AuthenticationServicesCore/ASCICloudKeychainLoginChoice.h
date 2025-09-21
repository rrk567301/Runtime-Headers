@class NSString;

@interface ASCICloudKeychainLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) char isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
