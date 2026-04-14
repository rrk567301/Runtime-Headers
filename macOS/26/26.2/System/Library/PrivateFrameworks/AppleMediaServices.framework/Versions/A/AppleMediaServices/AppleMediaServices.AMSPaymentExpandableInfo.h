@class NSString, NSArray;

@interface AppleMediaServices.AMSPaymentExpandableInfo : NSObject <NSSecureCoding> {
    void /* function */ title;
    void /* function */ info;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *info;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 info:(id)a1;

@end
