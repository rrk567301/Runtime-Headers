@class NSString, NSArray;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    char _containsAnySpaces;
    char _ownsUnichars;
    char _ownsChars;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _stringOnlyContainsWhitespaces;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;
@property (readonly, nonatomic) NSString *searchQueryParameterString;
@property (readonly, nonatomic) NSString *stringWithoutWhitespace;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) WBSURLCompletionUserTypedString *typedStringForURLMatching;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
