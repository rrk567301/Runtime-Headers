@interface PUPickerSearchBasedSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion>

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ mode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldReverseSortOrder;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0;

@end
