@class MCText, NSObject, MPTextInternal;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSSecureCoding, NSCopying> {
    MCText *_text;
    MPTextInternal *_internal;
    NSObject<MPEffectSupport> *_parent;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)textWithAttributedString:(id)a0;

- (void)dump;
- (id)action;
- (id)attributedString;
- (void)setParent:(id)a0;
- (long long)index;
- (id)initWithAttributedString:(id)a0;
- (void)setAttributedString:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)displayStartTime;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setText:(id)a0;
- (double)maxFontSize;
- (id)text;
- (id)defaultString;
- (id)description;
- (id)initWithCoder:(id)a0;
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
