@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) TIDocumentState *documentState;
@property (readonly, nonatomic) int shiftState;
@property (readonly, copy, nonatomic) NSUUID *identifier;

+ (id)tokenForKeyboardState:(id)a0;
+ (id)tokenForKeyboardState:(id)a0 preferredIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)shortIdentifier;
- (id)initForKeyboardState:(id)a0 preferredIdentifier:(id)a1;
- (BOOL)isSameRequestAs:(id)a0;

@end
