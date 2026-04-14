@class NSString, NSDictionary;

@interface UARPDeviceTatsuTicket : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *componentTag;
@property (readonly) NSDictionary *tssRequest;
@property (retain) NSDictionary *tssResponse;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithComponentTag:(id)a0 tssRequest:(id)a1;

@end
