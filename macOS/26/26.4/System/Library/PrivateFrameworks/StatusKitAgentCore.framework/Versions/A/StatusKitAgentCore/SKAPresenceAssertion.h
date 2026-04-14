@class SKPresenceOptions, NSString, SKPresencePayload, SKPresenceAssertionOptions, SKPresenceServerRoutablePayload, NSObject, SKAPresenceChannel;
@protocol OS_os_activity;

@interface SKAPresenceAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, copy, nonatomic) SKPresenceOptions *presenceOptions;
@property (readonly, copy, nonatomic) SKPresenceAssertionOptions *assertionOptions;
@property (copy, nonatomic) SKPresencePayload *presencePayload;
@property (copy, nonatomic) SKPresencePayload *persistentPayload;
@property (copy, nonatomic) SKPresenceServerRoutablePayload *serverRoutablePayload;
@property (nonatomic) BOOL isPresent;
@property (copy, nonatomic) SKAPresenceChannel *channel;

+ (id)logger;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithCoreDataPresenceAssertion:(id)a0;
- (id)initWithPresenceIdentifier:(id)a0 presenceOptions:(id)a1 assertionOptions:(id)a2 presencePayload:(id)a3 persistentPayload:(id)a4 serverRoutablePayload:(id)a5 isPresent:(BOOL)a6 channel:(id)a7;
- (BOOL)isEqualToPresenceAssertion:(id)a0;

@end
