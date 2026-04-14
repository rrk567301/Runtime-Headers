@class NSString;

@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *taskIdentifier;

+ (BOOL)cancelTaskWithIdentifier:(id)a0;
+ (BOOL)cancelAllTasks;
+ (BOOL)scheduleTask:(id)a0;
+ (BOOL)taskIsScheduledWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)activityForScheduling;

@end
