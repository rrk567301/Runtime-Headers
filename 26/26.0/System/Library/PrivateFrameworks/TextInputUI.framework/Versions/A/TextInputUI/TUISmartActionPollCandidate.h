@class NSString, NSArray;

@interface TUISmartActionPollCandidate : TIKeyboardCandidateSingle <NSSecureCoding, NSCopying> {
    NSString *_label;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)label;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)alternativeText;
- (unsigned long long)candidateProperty;
- (id)initWithTitle:(id)a0 options:(id)a1;

@end
