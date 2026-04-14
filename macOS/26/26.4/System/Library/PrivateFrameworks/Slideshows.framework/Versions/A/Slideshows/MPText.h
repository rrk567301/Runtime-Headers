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
- (double)maxFontSize;
- (id)initWithAttributedString:(id)a0;
- (void)setParent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)index;
- (void)encodeWithCoder:(id)a0;
- (id)defaultString;
- (void)setAttributedString:(id)a0;
- (id)init;
- (id)text;
- (id)attributedString;
- (id)description;
- (id)initWithCoder:(id)a0;
- (double)displayStartTime;
- (void)setText:(id)a0;
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
