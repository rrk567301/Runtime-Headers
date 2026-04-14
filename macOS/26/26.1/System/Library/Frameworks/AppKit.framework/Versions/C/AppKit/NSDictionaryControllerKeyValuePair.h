@class NSString;

@interface NSDictionaryControllerKeyValuePair : NSObject

@property (copy) NSString *key;
@property (retain) id value;
@property (copy) NSString *localizedKey;
@property (readonly, getter=isExplicitlyIncluded) BOOL explicitlyIncluded;

- (void)setValue:(id)a0;
- (id)key;
- (void)setLocalizedKey:(id)a0;
- (id)value;
- (id)_init;
- (id)description;
- (void)setKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)localizedKey;
- (id)init;

@end
