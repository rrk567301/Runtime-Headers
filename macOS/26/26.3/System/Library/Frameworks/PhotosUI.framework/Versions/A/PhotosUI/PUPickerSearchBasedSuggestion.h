@interface PUPickerSearchBasedSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) BOOL shouldReverseSortOrder;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMode:(long long)a0;

@end
