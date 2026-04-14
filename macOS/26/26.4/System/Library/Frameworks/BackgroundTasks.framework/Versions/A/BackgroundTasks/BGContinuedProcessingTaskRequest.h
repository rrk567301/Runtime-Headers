@class NSString, BGContinuedProcessingTaskContext;

@interface BGContinuedProcessingTaskRequest : BGTaskRequest

@property (retain, nonatomic) BGContinuedProcessingTaskContext *context;
@property (copy) NSString *iconUTI;
@property (copy) NSString *linkToBundleIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (nonatomic) long long strategy;
@property (nonatomic) long long requiredResources;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)_activity;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 context:(id)a3;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 onBehalfOf:(id)a3;

@end
