@class NSString, NSNumber;

@interface AppleMediaServices.AMSPaymentExpandableInfoKeysArrayObject : NSObject <NSSecureCoding> {
    void /* function */ stringKey;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) NSString *stringKeyKey;
@property (class, nonatomic, readonly) NSString *arrayIndexKey;

@property (nonatomic, readonly) NSString *stringKey;
@property (nonatomic, readonly) NSNumber *arrayIndex;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithStringKey:(id)a0 arrayIndex:(id)a1;

@end
