@class NSArray;

@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper>

@property (retain, nonatomic) NSArray *entries;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;

@end
