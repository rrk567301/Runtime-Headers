@class NSString, NSObject;
@protocol OS_os_transaction;

@interface CLOSTransaction : NSObject {
    NSString *_description;
    NSObject<OS_os_transaction> *_transaction;
}

- (id)initWithDescription:(const char *)a0;
- (void)dealloc;

@end
