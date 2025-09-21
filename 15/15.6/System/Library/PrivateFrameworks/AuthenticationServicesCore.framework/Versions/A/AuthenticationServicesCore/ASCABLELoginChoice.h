@class NSURL, NSString;

@interface ASCABLELoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *qrCodeURL;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) char isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQRCodeURL:(id)a0;

@end
