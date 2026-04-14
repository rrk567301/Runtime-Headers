@class NSString, NSArray;

@interface ATXSpotlightSuggestionCollection : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contextTitle;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSArray *suggestions;

- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0 contextTitle:(id)a1 sectionIdentifier:(id)a2;
- (BOOL)isEqualToATXSpotlightSuggestionCollection:(id)a0;

@end
