@class NSString, NSArray;

@interface TUISmartActionPollCandidate : TIKeyboardCandidateSingle <NSSecureCoding, NSCopying> {
    NSString *_label;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *options;
@property (nonatomic) BOOL shouldSuggestTitle;

- (id)description;
- (void)setLabel:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)alternativeText;
- (unsigned long long)candidateProperty;
- (id)initWithTitle:(id)a0 options:(id)a1;

@end
