@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *messageData;
@property (nonatomic) unsigned int messageEncoding;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *altText;
@property (nonatomic) long long format;
@property (readonly, nonatomic) BOOL isTall;
@property (nonatomic) BOOL shouldRemoveQuietZone;
@property (readonly, nonatomic) NSString *message;

+ (id)barcodesWithPassDictionary:(id)a0 bundle:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
