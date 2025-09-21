@class NSString;

@interface NSDictionaryControllerKeyValuePair : NSObject

@property (copy) NSString *key;
@property (retain) id value;
@property (copy) NSString *localizedKey;
@property (readonly, getter=isExplicitlyIncluded) BOOL explicitlyIncluded;

- (id)_init;
- (void)setValue:(id)a0;
- (id)value;
- (id)localizedKey;
- (id)init;
- (id)description;
- (void)setKey:(id)a0;
- (id)key;
- (BOOL)isEqual:(id)a0;
- (void)setLocalizedKey:(id)a0;

@end
