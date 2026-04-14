@class NSString;

@interface PKPayLaterPaymentSource : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long priority;

- (id)name;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)identifier;

@end
