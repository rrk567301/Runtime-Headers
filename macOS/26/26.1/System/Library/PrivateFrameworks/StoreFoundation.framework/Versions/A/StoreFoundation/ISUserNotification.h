@class NSDictionary;

@interface ISUserNotification : NSObject

@property (retain) NSDictionary *dictionary;
@property unsigned long long optionFlags;
@property long long allowedRetryCount;
@property long long currentRetryCount;
@property (retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0 options:(unsigned long long)a1;
- (struct __CFUserNotification { } *)copyUserNotification;

@end
