@class NSString, NSDictionary;

@interface UARPDeviceTatsuTicket : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *componentTag;
@property (readonly) NSDictionary *tssRequest;
@property (retain) NSDictionary *tssResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponentTag:(id)a0 tssRequest:(id)a1;

@end
