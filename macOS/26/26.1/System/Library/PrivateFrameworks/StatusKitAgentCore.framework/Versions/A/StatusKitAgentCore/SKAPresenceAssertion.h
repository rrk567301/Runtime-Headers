@class SKPresenceOptions, NSString, SKPresencePayload, SKPresenceAssertionOptions, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, copy, nonatomic) SKPresenceOptions *presenceOptions;
@property (readonly, copy, nonatomic) SKPresenceAssertionOptions *assertionOptions;
@property (copy, nonatomic) SKPresencePayload *payload;

+ (id)logger;

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoreDataPresenceAssertion:(id)a0;
- (id)initWithPresenceIdentifier:(id)a0 presenceOptions:(id)a1 assertionOptions:(id)a2 payload:(id)a3;
- (BOOL)isEqualToPresenceAssertion:(id)a0;

@end
