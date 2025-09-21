@class NSString, NSData;

@interface TransparencyIDSRegistrationRequestData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *application;
@property (retain) NSData *tbsKTIDSRegistrationData;
@property (retain) NSData *pushToken;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplication:(id)a0 registrationData:(id)a1;

@end
