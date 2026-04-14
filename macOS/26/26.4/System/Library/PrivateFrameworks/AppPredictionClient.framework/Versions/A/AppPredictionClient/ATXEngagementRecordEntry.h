@class NSDate, ATXExecutableIdentifier;

@interface ATXEngagementRecordEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXExecutableIdentifier *executable;
@property (readonly, nonatomic) NSDate *dateEngaged;
@property (readonly, nonatomic) unsigned long long engagementRecordType;

- (id)jsonDict;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithExecutable:(id)a0 dateEngaged:(id)a1 engagementRecordType:(unsigned long long)a2;

@end
