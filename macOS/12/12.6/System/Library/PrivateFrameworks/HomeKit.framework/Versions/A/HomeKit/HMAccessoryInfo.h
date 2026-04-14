@interface HMAccessoryInfo : NSObject

@property (readonly, getter=isReadOnly) BOOL readOnly;

- (id)initWithReadOnly:(BOOL)a0;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;

@end
