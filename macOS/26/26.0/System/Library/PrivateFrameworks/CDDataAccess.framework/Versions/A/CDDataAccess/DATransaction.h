@class NSString;

@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (void)dealloc;
- (id)initWithLabel:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
