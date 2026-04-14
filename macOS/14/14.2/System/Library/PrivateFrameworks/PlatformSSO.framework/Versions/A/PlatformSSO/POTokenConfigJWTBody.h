@class NSString;

@interface POTokenConfigJWTBody : _POJWTBodyBase

@property (readonly) NSString *userName;
@property (readonly) NSString *loginUserName;

- (id)mutableCopy;
- (id)userName;
- (id)loginUserName;

@end
