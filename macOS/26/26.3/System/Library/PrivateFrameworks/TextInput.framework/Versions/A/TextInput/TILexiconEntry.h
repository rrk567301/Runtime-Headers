@class NSString;

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *documentText;
@property (readonly, nonatomic) NSString *userInput;
@property (readonly, nonatomic) struct CGImage { } *focusedSecureLabel;
@property (readonly, nonatomic) struct CGImage { } *unfocusedSecureLabel;
@property (readonly, nonatomic) unsigned int slotID;

+ (id)entryWithDocumentText:(id)a0 userInput:(id)a1;
+ (id)entryWithFocusedSecureLabel:(struct CGImage { } *)a0 unfocusedSecureLabel:(struct CGImage { } *)a1 slotID:(unsigned int)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setFocusedSecureLabel:(struct CGImage { } *)a0;
- (void)setUnfocusedSecureLabel:(struct CGImage { } *)a0;

@end
