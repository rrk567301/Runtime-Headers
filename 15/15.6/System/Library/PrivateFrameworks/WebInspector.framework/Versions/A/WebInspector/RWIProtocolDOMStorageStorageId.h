@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *securityOrigin;
@property (nonatomic) char isLocalStorage;

- (id)initWithSecurityOrigin:(id)a0 isLocalStorage:(char)a1;

@end
