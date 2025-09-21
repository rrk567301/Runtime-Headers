@class TCSmartActionsResponse, TCSmartRepliesResponse;

@interface TCSmartResponses : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) TCSmartRepliesResponse *repliesResponse;
@property (readonly, copy, nonatomic) TCSmartActionsResponse *actionsResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSmartReplyResponse:(id)a0 smartActionResponse:(id)a1;

@end
