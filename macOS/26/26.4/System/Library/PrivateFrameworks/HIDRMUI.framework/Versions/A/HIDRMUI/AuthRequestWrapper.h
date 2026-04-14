@class NSArray, IOUserNotification, NSDate, NSMutableArray;

@interface AuthRequestWrapper : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) IOUserNotification *userNotification;
@property (nonatomic) long long pairingStatus;
@property (retain, nonatomic) NSArray *pairingCodeDigits;
@property (retain, nonatomic) NSMutableArray *pairingCodeDigitsEntered;
@property (nonatomic) unsigned long long pairingFailureCount;
@property (retain, nonatomic) NSDate *characterLockoutExpirationTimestamp;

+ (id)requestWrapperWithCompletion:(id /* block */)a0 andUserNotification:(id)a1;

- (void).cxx_destruct;
- (id)init;

@end
