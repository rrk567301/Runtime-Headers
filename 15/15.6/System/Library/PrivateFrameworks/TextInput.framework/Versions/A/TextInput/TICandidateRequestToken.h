@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) TIDocumentState *documentState;
@property (readonly, nonatomic) int shiftState;

+ (id)tokenForKeyboardState:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortIdentifier;
- (id)initForKeyboardState:(id)a0;
- (char)isSameRequestAs:(id)a0;

@end
