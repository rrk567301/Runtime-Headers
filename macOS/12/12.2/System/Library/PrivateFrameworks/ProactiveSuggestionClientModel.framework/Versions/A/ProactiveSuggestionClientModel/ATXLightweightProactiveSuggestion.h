@class NSString;

@interface ATXLightweightProactiveSuggestion : NSObject <ATXProtoBufWrapper>

@property (readonly, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) long long executableType;
@property (nonatomic) unsigned char consumerSubType;

+ (id)lightWeightSuggestionsFromSuggestions:(id)a0;
+ (id)lightWeightSuggestionDescriptionsFromLightWeightSuggestions:(id)a0;
+ (id)lightWeightSuggestionsFromProtoLightWeightSuggestions:(id)a0;
+ (id)protoLightWeightSuggestionsFromLightWeightSuggestions:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProactiveSuggestion:(id)a0;
- (id)initWithExecutableIdentifier:(id)a0 executableType:(long long)a1;
- (BOOL)isEqualToATXLightweightProactiveSuggestion:(id)a0;

@end
