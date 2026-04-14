@class TCSmartActionsResponse, TCSmartRepliesResponse;

@interface TCSmartResponses : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) TCSmartRepliesResponse *repliesResponse;
@property (readonly, copy, nonatomic) TCSmartActionsResponse *actionsResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithSmartReplyResponse:(id)a0 smartActionResponse:(id)a1;

@end
