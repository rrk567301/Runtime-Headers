@class NSString;

@interface ICLiveLinkQueueEventContentUpdatedMessage : NSObject

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedMessage;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedTitle:(id)a0 localizedMessage:(id)a1;

@end
