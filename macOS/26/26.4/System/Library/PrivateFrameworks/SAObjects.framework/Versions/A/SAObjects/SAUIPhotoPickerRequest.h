@class NSString, NSNumber;

@interface SAUIPhotoPickerRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *directInvocationBundleIdentifier;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSNumber *selectionLimit;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
