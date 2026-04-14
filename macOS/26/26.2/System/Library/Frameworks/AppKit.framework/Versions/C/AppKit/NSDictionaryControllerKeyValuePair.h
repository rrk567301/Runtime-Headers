@class NSString;

@interface NSDictionaryControllerKeyValuePair : NSObject

@property (copy) NSString *key;
@property (retain) id value;
@property (copy) NSString *localizedKey;
@property (readonly, getter=isExplicitlyIncluded) BOOL explicitlyIncluded;

- (BOOL)isEqual:(id)a0;
- (id)_init;
- (void)setLocalizedKey:(id)a0;
- (void)setValue:(id)a0;
- (id)localizedKey;
- (id)description;
- (id)value;
- (void)setKey:(id)a0;
- (id)init;
- (id)key;

@end
