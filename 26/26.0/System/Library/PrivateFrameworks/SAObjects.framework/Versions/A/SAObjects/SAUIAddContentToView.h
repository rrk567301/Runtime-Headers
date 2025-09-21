@class NSString;

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *targetViewId;

+ (id)addContentToViewWithDictionary:(id)a0 context:(id)a1;
+ (id)addContentToView;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
