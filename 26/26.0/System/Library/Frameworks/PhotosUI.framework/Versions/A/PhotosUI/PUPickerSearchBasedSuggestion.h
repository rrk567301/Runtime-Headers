@interface PUPickerSearchBasedSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) BOOL shouldReverseSortOrder;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithMode:(long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
