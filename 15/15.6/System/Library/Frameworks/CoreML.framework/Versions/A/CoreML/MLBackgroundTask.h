@class NSString;

@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *taskIdentifier;

+ (char)cancelTaskWithIdentifier:(id)a0;
+ (char)cancelAllTasks;
+ (char)scheduleTask:(id)a0;
+ (char)taskIsScheduledWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activityForScheduling;

@end
