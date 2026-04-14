@class NSString;

@interface NSDictionaryControllerKeyValuePair : NSObject

@property (copy) NSString *key;
@property (retain) id value;
@property (copy) NSString *localizedKey;
@property (readonly, getter=isExplicitlyIncluded) BOOL explicitlyIncluded;

- (id)key;
- (id)description;
- (id)init;
- (void)setKey:(id)a0;
- (id)_init;
- (id)localizedKey;
- (void)setLocalizedKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0;
- (id)value;

@end
