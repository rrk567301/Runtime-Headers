@class SKPresenceOptions, NSString, SKPresencePayload, SKPresenceAssertionOptions, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, copy, nonatomic) SKPresenceOptions *presenceOptions;
@property (readonly, copy, nonatomic) SKPresenceAssertionOptions *assertionOptions;
@property (copy, nonatomic) SKPresencePayload *payload;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoreDataPresenceAssertion:(id)a0;
- (id)initWithPresenceIdentifier:(id)a0 presenceOptions:(id)a1 assertionOptions:(id)a2 payload:(id)a3;
- (BOOL)isEqualToPresenceAssertion:(id)a0;

@end
