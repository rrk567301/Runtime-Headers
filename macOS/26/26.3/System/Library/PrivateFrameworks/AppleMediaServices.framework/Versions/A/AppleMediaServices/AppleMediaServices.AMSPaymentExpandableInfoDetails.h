@class NSString, NSArray;

@interface AppleMediaServices.AMSPaymentExpandableInfoDetails : NSObject <NSSecureCoding> {
    void /* function */ title;
    void /* function */ detail;
    void /* function */ url;
    void /* function */ type;
    void /* function */ keys;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) NSString *titleKey;
@property (class, nonatomic, readonly) NSString *detailKey;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *detail;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSArray *keys;

- (id)init;
- (id)initWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
