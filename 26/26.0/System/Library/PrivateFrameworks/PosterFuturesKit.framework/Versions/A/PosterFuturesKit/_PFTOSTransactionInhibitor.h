@class NSString, NSObject;
@protocol OS_os_transaction;

@interface _PFTOSTransactionInhibitor : PFTInhibitor

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (void)start;
- (id)initWithLabel:(id)a0;
- (void)stop;
- (void).cxx_destruct;

@end
