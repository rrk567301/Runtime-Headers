@class NSString;
@protocol ECEventType, ECVersionedPID;

@interface ECTestOnlyEventAuthenticationMessage : NSObject <ECEventAuthenticationMessage>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) id<ECVersionedPID> proxyTargetProcess;
@property (readonly, nonatomic) id<ECEventType> eventType;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long originIdentifier;
@property (readonly, nonatomic) id<ECVersionedPID> targetProcess;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithValidity:(BOOL)a0;

- (id)eventType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)timestamp;
- (unsigned long long)capabilities;
- (void)encodeWithCoder:(id)a0;
- (id)targetProcess;
- (id)init;
- (BOOL)matchesEvent:(struct __CGEvent { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)context;
- (unsigned long long)originIdentifier;
- (id)initWithValidity:(BOOL)a0;
- (id)proxyTargetProcess;
- (void)validateWithOptions:(id)a0 andResultBlock:(id /* block */)a1;

@end
