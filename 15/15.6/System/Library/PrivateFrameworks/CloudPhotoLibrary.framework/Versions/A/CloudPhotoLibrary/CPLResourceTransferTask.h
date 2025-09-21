@class NSString, CPLResourceTransferTaskOptions, CPLResource;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {
    CPLResourceTransferTaskOptions *_options;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) CPLResource *resource;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic, getter=isHighPriority) char highPriority;
@property (readonly, nonatomic, getter=isCancelled) char cancelled;
@property (copy, nonatomic) CPLResourceTransferTaskOptions *options;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic) unsigned long long intent;

+ (char)isForegroundOperationForIntent:(unsigned long long)a0;
+ (id)descriptionForIntent:(unsigned long long)a0;
+ (char)isHighPriorityForIntent:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (void)launch;
- (void)setTaskIdentifier:(id)a0;
- (void)cancelTask;
- (id)initWithResource:(id)a0 taskIdentifier:(id)a1;

@end
