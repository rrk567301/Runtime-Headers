@class NSData, NSString;

@interface COMessagingResponse : COMeshResponse

@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *payloadType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
