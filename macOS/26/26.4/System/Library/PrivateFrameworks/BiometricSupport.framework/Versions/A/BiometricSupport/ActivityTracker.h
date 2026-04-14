@class NSString, NSObject;
@protocol OS_os_transaction;

@interface ActivityTracker : NSObject {
    NSString *_description;
    NSObject<OS_os_transaction> *_transaction;
}

@property (copy) id /* block */ activityUpdateBlock;

- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;

@end
