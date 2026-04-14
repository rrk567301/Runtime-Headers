@class NSMutableDictionary;

@interface FCSafariBookmark : NSObject <NSSecureCoding> {
    NSMutableDictionary *_dictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bookmarkWithDictionary:(id)a0;

- (BOOL)isFolder;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setURL:(id)a0;
- (id)uuid;
- (id)title;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void)setTitle:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)url;

@end
