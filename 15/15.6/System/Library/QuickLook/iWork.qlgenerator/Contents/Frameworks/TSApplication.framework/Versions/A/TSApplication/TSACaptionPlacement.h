@interface TSACaptionPlacement : TSPObject

@property (nonatomic) long long captionAnchorLocation;
@property (nonatomic) long long drawableAnchorLocation;

+ (char)needsObjectUUID;

- (char)isEqual:(id)a0;
- (id)copyWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initWithContext:(id)a0 drawableAnchorLocation:(long long)a1 captionAnchorLocation:(long long)a2;
- (char)isEqualToCaptionPlacement:(id)a0;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1;

@end
