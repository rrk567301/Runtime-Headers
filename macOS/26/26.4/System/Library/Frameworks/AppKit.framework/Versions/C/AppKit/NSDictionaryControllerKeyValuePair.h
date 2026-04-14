@class NSString;

@interface NSDictionaryControllerKeyValuePair : NSObject

@property (copy) NSString *key;
@property (retain) id value;
@property (copy) NSString *localizedKey;
@property (readonly, getter=isExplicitlyIncluded) BOOL explicitlyIncluded;

- (id)key;
- (id)_init;
- (void)setLocalizedKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)value;
- (id)localizedKey;
- (id)description;
- (void)setKey:(id)a0;
- (void)setValue:(id)a0;

@end
