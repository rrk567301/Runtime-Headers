@class NSData, NSString;

@interface SiriTTSAudioData : NSObject <NSSecureCoding> {
    void /* function */ audioData;
    void /* function */ packetDescriptions;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic) struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } asbd;
@property (nonatomic, copy) NSData *audioData;
@property (nonatomic) long long packetCount;
@property (nonatomic, copy) NSData *packetDescriptions;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
