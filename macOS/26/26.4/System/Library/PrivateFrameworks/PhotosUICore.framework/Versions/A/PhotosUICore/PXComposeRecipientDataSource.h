@class NSSet, NSArray;

@interface PXComposeRecipientDataSource : NSObject

@property (copy, nonatomic) NSSet *recipients;
@property (readonly, copy, nonatomic) NSArray *composeRecipients;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)indexOfComposeRecipientForRecipient:(id)a0;
- (id)initWithComposeRecipients:(id)a0 recipients:(id)a1;

@end
