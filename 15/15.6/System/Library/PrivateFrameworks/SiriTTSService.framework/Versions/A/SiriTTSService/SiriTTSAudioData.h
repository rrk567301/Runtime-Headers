@class NSData, NSString;

@interface SiriTTSAudioData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ audioData;
    void /* unknown type, empty encoding */ packetDescriptions;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic) void /* unknown type, empty encoding */ asbd;
@property (nonatomic, copy) NSData *audioData;
@property (nonatomic) void /* unknown type, empty encoding */ packetCount;
@property (nonatomic, copy) NSData *packetDescriptions;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
