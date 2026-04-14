@class NSString;

@interface CCSerializedSetDescriptor : CCItemMessage

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
