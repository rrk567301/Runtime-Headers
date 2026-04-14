@class NSMutableDictionary;

@interface FCSafariBookmark : NSObject <NSSecureCoding> {
    NSMutableDictionary *_dictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bookmarkWithDictionary:(id)a0;

- (id)uuid;
- (id)title;
- (id)initWithCoder:(id)a0;
- (void)setURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFolder;
- (id)description;
- (id)url;
- (void)setTitle:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithTitle:(id)a0 url:(id)a1;

@end
