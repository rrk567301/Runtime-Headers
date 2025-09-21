@class NSData, NSString;

@interface COMessagingResponse : COMeshResponse

@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *payloadType;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
