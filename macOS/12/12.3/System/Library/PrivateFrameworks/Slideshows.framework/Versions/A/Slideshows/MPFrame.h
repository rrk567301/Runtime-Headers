@class NSString, NSMutableDictionary, MPSlide, MPFrameInternal;

@interface MPFrame : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_attributes;
    MPSlide *_parentSlide;
    MPFrameInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *frameID;
@property (copy, nonatomic) NSString *presetID;

+ (id)frameWithFrameID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dump;
- (id)frameID;
- (id)parentDocument;
- (id)fullDebugLog;
- (void)copyStruct:(id)a0;
- (id)presetID;
- (void)setPresetID:(id)a0;
- (void)setFrameID:(id)a0;
- (id)initWithFrameID:(id)a0;
- (void)setFrameAttribute:(id)a0 forKey:(id)a1;
- (id)frameAttributes;
- (id)frameAttributeForKey:(id)a0;
- (id)parentSlide;
- (void)setParentSlide:(id)a0;

@end
