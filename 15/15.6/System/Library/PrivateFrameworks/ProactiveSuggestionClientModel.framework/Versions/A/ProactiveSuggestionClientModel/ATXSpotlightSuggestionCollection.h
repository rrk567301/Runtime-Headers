@class NSString, NSArray;

@interface ATXSpotlightSuggestionCollection : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *contextTitle;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSArray *suggestions;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithSuggestions:(id)a0 contextTitle:(id)a1 sectionIdentifier:(id)a2;
- (char)isEqualToATXSpotlightSuggestionCollection:(id)a0;

@end
