@class NSString;

@interface IMKeyValueCollectionUserDefaultsStorage : NSObject <IMKeyValueCollectionStorage>

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_actuallyReadObjectForKey:(id)a0;
- (void)_actuallyWriteObject:(id)a0 forKey:(id)a1;
- (id)_decodeData:(id)a0 forKey:(id)a1;
- (id)setWithMutableClassIfApplicableFor:(Class)a0;

@end
