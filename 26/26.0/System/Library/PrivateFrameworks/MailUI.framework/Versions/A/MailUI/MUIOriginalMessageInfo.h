@class NSString;

@interface MUIOriginalMessageInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *headersHTML;
@property (readonly, copy, nonatomic) NSString *bodyHTML;
@property (readonly, nonatomic, getter=isFromMicrosoft) BOOL fromMicrosoft;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHeadersHTML:(id)a0 bodyHTML:(id)a1 isFromMicrosoft:(BOOL)a2;

@end
