@class MCText, NSObject, MPTextInternal;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSSecureCoding, NSCopying> {
    MCText *_text;
    MPTextInternal *_internal;
    NSObject<MPEffectSupport> *_parent;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)textWithAttributedString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributedString:(id)a0;
- (id)action;
- (long long)index;
- (id)initWithAttributedString:(id)a0;
- (void)dump;
- (id)attributedString;
- (id)text;
- (void)setParent:(id)a0;
- (void)setText:(id)a0;
- (id)defaultString;
- (BOOL)isOriginal;
- (id)plainString;
- (double)maxFontSize;
- (double)displayStartTime;
- (id)parentEffect;
- (id)fullDebugLog;
- (void)copyStruct:(id)a0;
- (id)nearestPlug;
- (void)checkForMaxFontSize;
- (void)checkForPlacesLabel;
- (id)subtitleSlide;
- (double)displayTime;
- (double)displayDuration;
- (double)textAreaAspectRatio;
- (void)setPlainString:(id)a0;

@end
