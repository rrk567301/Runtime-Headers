@interface CDMServiceGraphProtoBackedCommand : CDMServiceGraphCommand

+ (BOOL)supportsSecureCoding;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)loggingRequestID;

@end
