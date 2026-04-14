@class MRContentItem, MRPlaybackQueueRequest;

@interface MRContentItemRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MRContentItem *item;
@property (retain, nonatomic) MRPlaybackQueueRequest *request;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItem:(id)a0 request:(id)a1;

@end
