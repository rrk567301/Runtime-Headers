@class NSData, NSString;

@interface AMSBlindedData : NSObject <NSCopying, NSSecureCoding> {
    void /* function */ blindedElement;
    void /* function */ privateInput;
    void /* function */ timestamp;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *blindedElement;
@property (nonatomic, readonly) NSData *privateInput;
@property (nonatomic, readonly) NSString *timestamp;
@property (nonatomic, readonly) NSString *blindedElementString;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlindedElement:(id)a0 privateInput:(id)a1 timestamp:(id)a2;

@end
