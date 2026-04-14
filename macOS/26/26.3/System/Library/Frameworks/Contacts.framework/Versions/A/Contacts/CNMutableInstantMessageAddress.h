@class NSString;

@interface CNMutableInstantMessageAddress : CNInstantMessageAddress

@property (copy) NSString *username;
@property (copy) NSString *service;

- (id)freeze;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
