@class NSString, SCROffsetMappedString, SCRCIndexMap;

@interface SCROutputAction : NSObject <NSCopying, NSSecureCoding> {
    NSString *_category;
    NSString *_component;
    long long _message;
    SCRCIndexMap *_variants;
    unsigned long long _synchronization;
    SCROffsetMappedString *_offsetMappedString;
    BOOL _hasBeenDispatched;
    BOOL _hasBeenExecuted;
    unsigned long long _uniqueID;
    float _pitch;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_defaultSoundAction;
+ (id)indentationSoundActionWithLevel:(unsigned long long)a0;

- (void)setCategory:(id)a0;
- (void)setMessage:(long long)a0;
- (id)shortDescription;
- (float)pitch;
- (void)setPitch:(float)a0;
- (id)category;
- (id)initWithCoder:(id)a0;
- (id)objectForIndex:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)component;
- (id)description;
- (unsigned long long)uniqueID;
- (id)string;
- (id)variants;
- (id)init;
- (long long)message;
- (void)setOriginalString:(id)a0;
- (void)setComponent:(id)a0;
- (void)setVariants:(id)a0;
- (BOOL)hasBeenExecuted;
- (unsigned long long)synchronization;
- (id)_initWithOutputAction:(id)a0;
- (void)addVariants:(id)a0;
- (void)copyMarkup:(id)a0;
- (BOOL)hasBeenDispatched;
- (id)initBrailleActionWithMessage:(long long)a0 variants:(id)a1;
- (id)initSoundActionWithMessage:(long long)a0 soundIdentifier:(id)a1;
- (id)initSpeechActionWithMessage:(long long)a0 string:(id)a1 variant:(long long)a2;
- (id)initTextDisplayActionWithMessage:(long long)a0 string:(id)a1 variant:(long long)a2;
- (id)offsetMappedString;
- (void)setHasBeenDispatched:(BOOL)a0;
- (void)setHasBeenExecuted:(BOOL)a0;
- (void)setOriginalAttributedString:(id)a0;
- (void)setSynchronization:(unsigned long long)a0;
- (void)setVariant:(id)a0 forKey:(long long)a1;
- (id)shortDescriptionReversed;

@end
