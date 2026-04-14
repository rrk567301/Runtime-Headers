@class NSString;

@interface SiriTTSVoiceSubscription : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ clientId;
    void /* unknown type, empty encoding */ accessoryId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic, copy) NSString *clientId;
@property (nonatomic, copy) NSString *accessoryId;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
