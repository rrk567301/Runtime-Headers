@class NSData;

@interface SLFetchShareableContentActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) NSData *dataRepresentation;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithDataRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
