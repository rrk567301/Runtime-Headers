@class NSString, NSImage, NSMenu;

@interface NSTextToken : NSObject <NSCopying>

@property (copy, nonatomic) id representedObject;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSImage *image;
@property (retain, nonatomic) NSMenu *menu;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRepresentedValue:(id)a0 title:(id)a1;
- (id)initWithRepresentedObject:(id)a0 title:(id)a1;

@end
