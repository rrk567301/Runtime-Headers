@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (int)precision;
- (id)typeNamespace;
- (id)rawString;
- (id)tokens;
- (void).cxx_destruct;
- (id)type;
- (int)width;

@end
