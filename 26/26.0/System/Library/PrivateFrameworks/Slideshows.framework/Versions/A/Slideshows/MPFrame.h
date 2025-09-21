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

- (void)dump;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)frameID;
- (id)parentDocument;
- (id)frameAttributes;
- (void)setParentSlide:(id)a0;
- (void)copyStruct:(id)a0;
- (id)frameAttributeForKey:(id)a0;
- (id)fullDebugLog;
- (id)initWithFrameID:(id)a0;
- (id)parentSlide;
- (id)presetID;
- (void)setFrameAttribute:(id)a0 forKey:(id)a1;
- (void)setFrameID:(id)a0;
- (void)setPresetID:(id)a0;

@end
