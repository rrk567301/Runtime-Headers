@class NSArray, NSMutableArray, NSMutableDictionary;

@interface ARServiceCollection : NSObject <ARServiceCollectionProtocol, NSCopying> {
    NSMutableArray *_servicesInternal;
    NSMutableDictionary *_servicesByPID;
    NSMutableDictionary *_servicesByClass;
}

@property (readonly, nonatomic) NSArray *services;

- (void)removeService:(id)a0;
- (void)addService:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)servicesForPID:(id)a0;
- (id)serviceClasses;
- (id)servicesForClass:(Class)a0;

@end
