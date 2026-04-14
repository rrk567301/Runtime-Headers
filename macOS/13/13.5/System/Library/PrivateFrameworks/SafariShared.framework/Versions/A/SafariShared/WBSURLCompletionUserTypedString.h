@class NSString, NSArray;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;
@property (readonly, nonatomic) NSString *searchQueryParameterString;
@property (readonly, nonatomic) NSString *stringWithoutWhitespace;
@property (readonly, nonatomic) NSArray *components;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
