@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
    void *_reserved5;
    void *_reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}

@property (retain) NSFetchRequest *fetchRequest;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isReadOnly;
- (void)setReadOnly:(char)a0;
- (char)isTransient;
- (void)setTransient:(char)a0;
- (void)_createCachesAndOptimizeState;
- (unsigned long long)_propertyType;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;

@end
