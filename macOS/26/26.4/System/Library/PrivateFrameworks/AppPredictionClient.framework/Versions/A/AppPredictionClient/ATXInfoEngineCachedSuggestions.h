@class NSArray;

@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper>

@property (retain, nonatomic) NSArray *entries;

- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;

@end
