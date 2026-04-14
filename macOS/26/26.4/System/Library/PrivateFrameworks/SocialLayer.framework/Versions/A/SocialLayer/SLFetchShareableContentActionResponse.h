@class SLShareableContentLoadResult;

@interface SLFetchShareableContentActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) SLShareableContentLoadResult *result;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithResult:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
