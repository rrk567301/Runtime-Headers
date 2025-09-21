@class NSString, SOAudioDevice;

@interface SOAudioSource : NSObject {
    unsigned int _kind;
    NSString *_name;
    NSString *_sourceType;
    SOAudioDevice *_device;
}

- (id)sourceType;
- (id)device;
- (void)dealloc;
- (unsigned int)kind;
- (id)description;
- (id)name;
- (BOOL)isInternalMicrophone;
- (long long)suitabilityScore;
- (id)_debuggingAttributes;
- (id)initWithKind:(unsigned int)a0 forDevice:(id)a1 sourceName:(id)a2 sourceType:(id)a3;
- (BOOL)isDefaultInputDevice;
- (id)suitabilityExplanation;

@end
