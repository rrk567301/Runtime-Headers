@class NSObject;
@protocol OS_os_transaction;

@interface NDAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) unsigned int powerAssertionID;

- (void)dealloc;
- (id)init;
- (id)initWithName:(id)a0 options:(long long)a1;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
