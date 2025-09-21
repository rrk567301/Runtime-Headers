@class NSArray;

@interface _PSCNAutocompleteFeedbackVendedSuggestions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *suggestions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0;

@end
