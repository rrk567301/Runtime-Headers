@class NSData;

@interface Sage.DocumentRegistrationXPCResponse : NSObject <NSSecureCoding> {
    void /* function */ _registration;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_registration;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
