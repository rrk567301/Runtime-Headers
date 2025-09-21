@class NSError, NSString, NSDate, EMStatusUpdateProvider, NSDictionary, NSObject, NSProgress, EMActivityObjectID;
@protocol OS_os_log, EFCancelable;

@interface EMActivity : NSObject <EFLoggable, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    EMStatusUpdateProvider *_statusUpdateProvider;
    id<EFCancelable> _progressKVOCancellation;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) double fractionCompleted;
@property (readonly) EMActivityObjectID *objectID;
@property (readonly) char needsPersistentHistory;
@property (readonly) long long activityType;
@property (readonly) NSDate *started;
@property (readonly) NSDate *finished;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingLocalizedDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)finishWithError:(id)a0;
- (id)initWithActivityType:(long long)a0 userInfo:(id)a1;
- (char)isEqualToActivityWithType:(long long)a0 userInfo:(id)a1;
- (void)setCompletedCount:(long long)a0 totalCount:(long long)a1;
- (id)_localizedDescriptionForFetchState:(long long)a0;
- (void)_observeProgress;

@end
