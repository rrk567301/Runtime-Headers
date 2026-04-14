@class NSString, NSArray;

@interface TUISmartActionPollCandidate : TIKeyboardCandidateSingle <NSSecureCoding, NSCopying> {
    NSString *_label;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *options;
@property (nonatomic) BOOL shouldSuggestTitle;

- (unsigned long long)hash;
- (void)setLabel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)alternativeText;
- (unsigned long long)candidateProperty;
- (id)initWithTitle:(id)a0 options:(id)a1;

@end
