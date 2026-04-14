@class NSString, NSImage, NSURL, NSPathComponentCell, NSAttributedString;

@interface NSPathControlItem : NSObject {
    NSPathComponentCell *_cell;
}

@property (copy) NSString *title;
@property (copy) NSAttributedString *attributedTitle;
@property (retain) NSImage *image;
@property (readonly) NSURL *URL;

+ (id)itemWithCell:(id)a0;

- (id)init;
- (void)setURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithPathComponentCell:(id)a0;
- (id)pathComponentCell;

@end
