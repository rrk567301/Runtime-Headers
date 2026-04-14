@class SKAPresenceProfile, SKAPresenceChannel, NSString;

@interface SKAPresenceContext : NSObject {
    void /* function */ presenceIdentifier;
}

@property (nonatomic, readonly) SKAPresenceProfile *profile;
@property (nonatomic, readonly) SKAPresenceChannel *channel;
@property (nonatomic, readonly) NSString *presenceIdentifier;
@property (nonatomic, readonly) NSString *description;

+ (id)fromDatabaseChannel:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)asDatabaseChannel;
- (id)initWithPresenceIdentifier:(id)a0 serviceIdentifier:(id)a1 channel:(id)a2 error:(id *)a3;
- (id)initWithProfile:(id)a0 channel:(id)a1 presenceIdentifier:(id)a2;

@end
