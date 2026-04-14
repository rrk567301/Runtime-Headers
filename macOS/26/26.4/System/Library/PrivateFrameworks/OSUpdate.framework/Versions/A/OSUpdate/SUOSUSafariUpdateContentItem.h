@class NSString, NSImage, NSDictionary;

@interface SUOSUSafariUpdateContentItem : NSObject

@property (readonly) NSString *title;
@property (readonly) NSString *body;
@property (readonly) NSString *sfSymbolName;
@property (readonly) NSString *privateSfSymbolName;
@property (readonly) NSImage *image;
@property (readonly) NSDictionary *metadata;

+ (id)safariUpdateContentItemWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 body:(id)a1 sfSymbolName:(id)a2 privateSfSymbolName:(id)a3 image:(id)a4 metadata:(id)a5;

@end
