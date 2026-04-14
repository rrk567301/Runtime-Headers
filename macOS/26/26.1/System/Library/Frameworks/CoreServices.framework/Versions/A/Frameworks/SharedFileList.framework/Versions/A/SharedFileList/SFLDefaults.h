@class NSString;

@interface SFLDefaults : NSObject

@property (readonly) NSString *serviceName;
@property (readonly) NSString *legacyServiceName;
@property (readonly) NSString *legacyAsyncServiceName;

+ (id)standardDefaults;
+ (id)shared;

- (id)dictionaryRepresentation;
- (id)_objectForKey:(id)a0;
- (id)description;
- (id)_objectForPrivilegedKey:(id)a0;

@end
