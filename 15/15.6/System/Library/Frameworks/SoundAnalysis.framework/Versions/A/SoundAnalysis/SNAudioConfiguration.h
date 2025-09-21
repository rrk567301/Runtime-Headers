@class NSString, NSArray;

@interface SNAudioConfiguration : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSArray *channelMap;
@property (nonatomic) char useSiriAudioRouting;
@property (nonatomic) char prefersNoMicrophoneUsageIndicator;
@property (nonatomic, readonly) char prefersNoInterruptions;
@property (nonatomic, readonly) char allowHapticsAndSystemSoundsDuringRecording;
@property (nonatomic, readonly) char preferDecoupledIO;
@property (nonatomic, readonly) char smartRoutingConsideration;
@property (nonatomic, readonly) NSArray *audioHWControlFlags;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)shazamAudioConfiguration;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
