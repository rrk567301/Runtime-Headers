@class MCText, NSObject, MPTextInternal;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSSecureCoding, NSCopying> {
    MCText *_text;
    MPTextInternal *_internal;
    NSObject<MPEffectSupport> *_parent;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)textWithAttributedString:(id)a0;

- (void)setText:(id)a0;
- (void)setAttributedString:(id)a0;
- (id)action;
- (void)dump;
- (long long)index;
- (id)text;
- (id)initWithAttributedString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributedString;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)displayStartTime;
- (id)description;
- (id)defaultString;
- (void)setParent:(id)a0;
- (id)init;
- (double)maxFontSize;
- (void)dealloc;
- (double)displayTime;
- (BOOL)isOriginal;
- (id)plainString;
- (double)displayDuration;
- (void)setPlainString:(id)a0;
- (void)checkForMaxFontSize;
- (void)checkForPlacesLabel;
- (void)copyStruct:(id)a0;
- (id)fullDebugLog;
- (id)nearestPlug;
- (id)parentEffect;
- (id)subtitleSlide;
- (double)textAreaAspectRatio;

@end
