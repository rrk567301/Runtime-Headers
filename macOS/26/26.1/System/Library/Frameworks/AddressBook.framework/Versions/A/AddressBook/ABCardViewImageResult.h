@class NSImage, NSString;

@interface ABCardViewImageResult : NSObject <NSCopying>

@property (readonly, retain) NSImage *image;
@property (readonly, copy) NSString *photoIdentifier;
@property (readonly, getter=isPlaceholder) BOOL placeholder;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 photoIdentifier:(id)a1 isPlaceholder:(BOOL)a2;

@end
