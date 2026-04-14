@class NSArray;

@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper>

@property (retain, nonatomic) NSArray *entries;

- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;

@end
