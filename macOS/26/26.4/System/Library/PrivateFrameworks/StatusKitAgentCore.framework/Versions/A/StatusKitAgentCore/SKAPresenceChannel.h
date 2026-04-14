@class NSString, NSData, NSDate;

@interface SKAPresenceChannel : NSObject <NSCopying> {
    void /* function */ channelIdentifier;
    void /* function */ channelToken;
    void /* function */ serverKey;
    void /* function */ peerKey;
    void /* function */ membershipKey;
    void /* unknown type, empty encoding */ dateCreated;
}

@property (nonatomic, readonly) NSString *channelIdentifier;
@property (nonatomic, readonly) NSData *channelToken;
@property (nonatomic, readonly) NSData *serverKey;
@property (nonatomic, readonly) NSData *peerKey;
@property (nonatomic, readonly) NSData *membershipKey;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSString *description;

+ (id)fromDatabaseChannel:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChannelIdentifier:(id)a0 channelToken:(id)a1 serverKey:(id)a2 peerKey:(id)a3 membershipKey:(id)a4 dateCreated:(id)a5;
- (id)initWithChannelIdentifier:(id)a0 channelToken:(id)a1 serverKey:(id)a2 peerKey:(id)a3 membershipKey:(id)a4 dateCreated:(id)a5 version:(long long)a6;
- (id)initWithCoreDataPresenceChannel:(id)a0;
- (id)rawValueWithError:(id *)a0;

@end
