@class NSString;

@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (id)initWithLabel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
