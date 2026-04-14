@interface CDPPrivacySensitiveObject : NSObject

@property (readonly) id wrappedObject;

+ (id)sensitiveObjectWrappingObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
