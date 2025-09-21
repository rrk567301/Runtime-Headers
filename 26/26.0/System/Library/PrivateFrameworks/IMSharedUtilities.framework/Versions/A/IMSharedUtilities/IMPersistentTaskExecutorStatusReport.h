@class NSString, NSArray;

@interface IMPersistentTaskExecutorStatusReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) unsigned long long lane;
@property (nonatomic) long long runResult;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSArray *taskReports;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0 lane:(unsigned long long)a1 runResult:(long long)a2 status:(long long)a3 taskReports:(id)a4;
- (BOOL)isEqualToStatusReport:(id)a0;

@end
