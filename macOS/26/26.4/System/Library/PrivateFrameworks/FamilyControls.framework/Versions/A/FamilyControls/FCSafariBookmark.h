@class NSMutableDictionary;

@interface FCSafariBookmark : NSObject <NSSecureCoding> {
    NSMutableDictionary *_dictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bookmarkWithDictionary:(id)a0;

- (void)setURL:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)title;
- (id)dictionaryRepresentation;
- (BOOL)isFolder;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)uuid;
- (void)dealloc;
- (id)url;

@end
