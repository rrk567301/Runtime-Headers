@class NSString, NSObject;
@protocol OS_os_transaction;

@interface WLKTransactionScope : NSObject

@property (readonly) NSObject<OS_os_transaction> *transaction;
@property (readonly, copy) NSString *identifier;
@property (readonly) double delay;

- (id)initWithIdentifier:(id)a0 delay:(double)a1;
- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
