@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
    void *_reserved5;
    void *_reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}

@property (retain) NSFetchRequest *fetchRequest;

+ (BOOL)supportsSecureCoding;

- (BOOL)isReadOnly;
- (BOOL)isTransient;
- (void)setReadOnly:(BOOL)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_createCachesAndOptimizeState;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_propertyType;
- (void)setTransient:(BOOL)a0;
- (BOOL)isEqual:(id)a0;

@end
