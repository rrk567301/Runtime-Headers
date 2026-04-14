@class NSString, NSImage, NSURL, NSPathComponentCell, NSAttributedString;

@interface NSPathControlItem : NSObject {
    NSPathComponentCell *_secretCell;
}

@property (copy) NSString *title;
@property (copy) NSAttributedString *attributedTitle;
@property (retain) NSImage *image;
@property (readonly) NSURL *URL;

+ (id)itemWithCell:(id)a0;

- (void)dealloc;
- (id)init;
- (void)setURL:(id)a0;
- (id)initWithPathComponentCell:(id)a0;
- (id)pathComponentCell;

@end
