@class TSDInfoGeometry, TSDPathSource, TSPObject, NSString, NSObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing, TSDInfoWithPathSource>

@property (copy, nonatomic) TSDPathSource *pathSource;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) char floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) char anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) char inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) char inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) char attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char matchesObjectPlaceholderGeometry;

+ (char)wantsTitleAndCaptionUUIDs;

- (void).cxx_destruct;
- (id)objectForProperty:(int)a0;
- (Class)layoutClass;
- (Class)repClass;
- (id)initWithContext:(id)a0 geometry:(id)a1 pathSource:(id)a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (char)isEqualToMaskInfo:(id)a0;

@end
