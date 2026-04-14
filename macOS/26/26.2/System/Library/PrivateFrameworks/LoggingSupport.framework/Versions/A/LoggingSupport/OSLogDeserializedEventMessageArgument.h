@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (unsigned long long)unsignedInt64Value;
- (unsigned long long)privacy;
- (unsigned long long)category;
- (id)_numValue;
- (long long)int64Value;
- (unsigned short)rawBytesLength;
- (void).cxx_destruct;
- (long double)longDoubleValue;
- (double)doubleValue;
- (unsigned long long)scalarType;
- (const void *)rawBytes;
- (id)objectRepresentation;
- (unsigned long long)availability;
- (unsigned long long)scalarCategory;
- (id)initWithDict:(id)a0 metadata:(id)a1;

@end
