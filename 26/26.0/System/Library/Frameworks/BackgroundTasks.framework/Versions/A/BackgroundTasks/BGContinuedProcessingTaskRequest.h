@class NSString;

@interface BGContinuedProcessingTaskRequest : BGTaskRequest

@property (copy, nonatomic) NSString *representedApplicationBundleIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (nonatomic) long long strategy;
@property (nonatomic) long long requiredResources;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_activity;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 onBehalfOf:(id)a3;

@end
