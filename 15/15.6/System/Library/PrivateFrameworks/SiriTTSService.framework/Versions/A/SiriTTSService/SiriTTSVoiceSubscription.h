@class NSString;

@interface SiriTTSVoiceSubscription : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ clientId;
    void /* unknown type, empty encoding */ accessoryId;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic, copy) NSString *clientId;
@property (nonatomic, copy) NSString *accessoryId;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVoice:(id)a0 clientId:(id)a1 accessoryId:(id)a2;

@end
