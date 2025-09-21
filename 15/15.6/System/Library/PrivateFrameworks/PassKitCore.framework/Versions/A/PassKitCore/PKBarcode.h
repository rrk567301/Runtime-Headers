@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *altText;
@property (nonatomic) long long format;
@property (readonly, nonatomic) char isTall;
@property (nonatomic) char shouldRemoveQuietZone;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPassDictionary:(id)a0 bundle:(id)a1;

@end
