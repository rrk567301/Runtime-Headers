@class NSString, NSDictionary, NSMutableDictionary;

@interface CMIOExtensionProviderProperties : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_propertiesDictionary;
}

@property (retain) NSString *name;
@property (retain) NSString *manufacturer;
@property (copy) NSDictionary *propertiesDictionary;

+ (id)providerPropertiesWithDictionary:(id)a0;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (void)setPropertyState:(id)a0 forProperty:(id)a1;
- (id)initWithPropertyValues:(id)a0;

@end
