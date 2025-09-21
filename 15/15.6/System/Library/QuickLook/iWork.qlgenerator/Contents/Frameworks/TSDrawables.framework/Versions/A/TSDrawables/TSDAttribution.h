@class NSString, NSURL;

@interface TSDAttribution : TSCKSosBase <NSCopying> {
    NSString *_externalURLString;
    NSString *_authorURLString;
    char _definedTitle;
    char _definedDescriptionText;
    char _definedExternalURLString;
    char _definedAuthorName;
    char _definedAuthorURLString;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSURL *externalURL;
@property (readonly, nonatomic) NSString *authorName;
@property (readonly, nonatomic) NSURL *authorURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithTitle:(id)a0 descriptionText:(id)a1 externalURL:(id)a2 authorName:(id)a3 authorURL:(id)a4;

@end
