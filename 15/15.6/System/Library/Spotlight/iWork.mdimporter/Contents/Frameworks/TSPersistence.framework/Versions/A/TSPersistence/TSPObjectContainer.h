@class NSArray;

@interface TSPObjectContainer : TSPObject {
    unsigned char _packageIdentifier;
}

@property (readonly, nonatomic) NSArray *childObjects;

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)a0;
+ (char)tsp_isInternalObjectContainerClass;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned int)delayedArchivingPriority;
- (id)initWithContext:(id)a0 packageIdentifier:(unsigned char)a1;
- (id)packageLocator;
- (void)prepareForComponentWriteWithDelayedObjects:(id)a0;
- (char)shouldDelayArchiving;
- (long long)tsp_identifier;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned char)componentRequiredPackageIdentifier;

@end
