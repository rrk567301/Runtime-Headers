@interface PUPickerSuggestionAll : NSObject <NSSecureCoding, PUPickerSuggestion>

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldReverseSortOrder;

- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
