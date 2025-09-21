@class NSString;

@interface MUIOriginalMessageInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *headersHTML;
@property (readonly, copy, nonatomic) NSString *bodyHTML;
@property (readonly, nonatomic, getter=isFromMicrosoft) char fromMicrosoft;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHeadersHTML:(id)a0 bodyHTML:(id)a1 isFromMicrosoft:(char)a2;

@end
