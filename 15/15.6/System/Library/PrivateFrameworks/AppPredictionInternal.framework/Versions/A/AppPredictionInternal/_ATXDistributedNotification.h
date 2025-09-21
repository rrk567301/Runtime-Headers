@class NSString, NSDictionary;

@interface _ATXDistributedNotification : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) double timestamp;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (char)isEqualTo_ATXDistributedNotification:(id)a0;

@end
