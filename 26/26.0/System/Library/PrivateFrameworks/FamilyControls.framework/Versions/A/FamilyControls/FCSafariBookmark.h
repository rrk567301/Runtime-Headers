@class NSMutableDictionary;

@interface FCSafariBookmark : NSObject <NSSecureCoding> {
    NSMutableDictionary *_dictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bookmarkWithDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)url;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFolder;
- (void)setURL:(id)a0;
- (id)description;
- (id)title;
- (id)uuid;
- (void)setTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1;

@end
