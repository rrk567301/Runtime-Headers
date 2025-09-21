@interface SNDetectSpeechUtteranceRequest : NSObject <SNRequest, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) double decisionDelay;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestType:(long long)a0;

@end
