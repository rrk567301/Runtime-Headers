@class NSMutableDictionary;

@interface FCSafariBookmark : NSObject <NSSecureCoding> {
    NSMutableDictionary *_dictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bookmarkWithDictionary:(id)a0;

- (id)uuid;
- (id)dictionaryRepresentation;
- (void)setURL:(id)a0;
- (BOOL)isFolder;
- (void)setTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)title;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)url;
- (id)initWithTitle:(id)a0 url:(id)a1;

@end
