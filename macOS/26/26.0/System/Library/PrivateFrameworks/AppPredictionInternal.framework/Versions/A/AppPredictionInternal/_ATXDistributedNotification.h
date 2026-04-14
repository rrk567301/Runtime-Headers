@class NSString, NSDictionary;

@interface _ATXDistributedNotification : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) double timestamp;

- (id)init;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualTo_ATXDistributedNotification:(id)a0;

@end
