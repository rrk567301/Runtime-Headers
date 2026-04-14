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
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_defaultSoundAction;
+ (id)indentationSoundActionWithLevel:(unsigned long long)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setMessage:(long long)a0;
- (long long)message;
- (unsigned long long)uniqueID;
- (id)category;
- (void)setCategory:(id)a0;
- (id)component;
- (id)shortDescription;
- (id)variants;
- (void)setComponent:(id)a0;
- (void)setVariants:(id)a0;
- (void)setOriginalString:(id)a0;
- (id)objectForIndex:(long long)a0;
- (void)setOriginalAttributedString:(id)a0;
- (id)_initWithOutputAction:(id)a0;
- (id)initSpeechActionWithMessage:(long long)a0 string:(id)a1 variant:(long long)a2;
- (id)initTextDisplayActionWithMessage:(long long)a0 string:(id)a1 variant:(long long)a2;
- (id)initSoundActionWithMessage:(long long)a0 soundIdentifier:(id)a1;
- (id)initBrailleActionWithMessage:(long long)a0 variants:(id)a1;
- (void)setVariant:(id)a0 forKey:(long long)a1;
- (void)setSynchronization:(unsigned long long)a0;
- (void)setHasBeenDispatched:(BOOL)a0;
- (void)setHasBeenExecuted:(BOOL)a0;
- (void)addVariants:(id)a0;
- (id)offsetMappedString;
- (unsigned long long)synchronization;
- (BOOL)hasBeenDispatched;
- (BOOL)hasBeenExecuted;
- (id)shortDescriptionReversed;

@end
