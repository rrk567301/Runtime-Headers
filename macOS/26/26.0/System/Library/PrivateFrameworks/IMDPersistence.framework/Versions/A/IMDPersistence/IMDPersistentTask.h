@class NSString, NSDictionary;

@interface IMDPersistentTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rowID;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) unsigned long long group;
@property (readonly, nonatomic) unsigned long long flag;
@property (readonly, nonatomic) long long flagPriority;
@property (readonly, nonatomic) unsigned long long lane;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) long long reasonPriority;
@property (readonly, nonatomic) long long retryCount;

+ (id)_dataForUserInfo:(id)a0;
+ (id)_decodeUserInfoData:(id)a0;
+ (id)keyPathsToColumns;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGUID:(id)a0 flag:(unsigned long long)a1 lane:(unsigned long long)a2 reason:(long long)a3 userInfo:(id)a4 retryCount:(long long)a5;
- (id)initWithGUID:(id)a0 flag:(unsigned long long)a1 spotlightReason:(long long)a2;
- (id)initWithGUID:(id)a0 flag:(unsigned long long)a1 spotlightReason:(long long)a2 userInfo:(id)a3;
- (id)initWithRowID:(long long)a0 guid:(id)a1 group:(unsigned long long)a2 flag:(unsigned long long)a3 flagPriority:(long long)a4 lane:(unsigned long long)a5 reason:(long long)a6 reasonPriority:(long long)a7 userInfo:(id)a8 retryCount:(long long)a9;
- (id)initWithStoreDictionary:(id)a0;

@end
