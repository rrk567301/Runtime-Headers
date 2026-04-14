@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (unsigned long long)availability;
- (long long)int64Value;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)_numValue;
- (double)doubleValue;
- (unsigned long long)privacy;
- (unsigned long long)scalarType;
- (unsigned short)rawBytesLength;
- (unsigned long long)category;
- (unsigned long long)unsignedInt64Value;
- (id)objectRepresentation;
- (void).cxx_destruct;
- (long double)longDoubleValue;
- (unsigned long long)scalarCategory;
- (const void *)rawBytes;

@end
