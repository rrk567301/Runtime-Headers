@class NSString, NSUUID, NSObject;
@protocol OS_os_transaction;

@interface MSVXPCTransaction : NSObject {
    NSUUID *_identifier;
    NSObject<OS_os_transaction> *_transaction;
    long long _transactionCount;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)activeTransactions;

- (void)endTransaction;
- (id)description;
- (void)beginTransaction;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)endTransactionOnDate:(id)a0;

@end
