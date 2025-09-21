@class NSString;

@interface ULBGSystemTaskRequest : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long priority;
@property (nonatomic) long long requiresProtectionClass;
@property (nonatomic) char resourceIntensive;
@property (nonatomic) long long resources;
@property (nonatomic) char requiresBuddyComplete;
@property (nonatomic) char requiresUserInactivity;
@property (nonatomic) char postInstall;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)createRequestFromSelf;

@end
