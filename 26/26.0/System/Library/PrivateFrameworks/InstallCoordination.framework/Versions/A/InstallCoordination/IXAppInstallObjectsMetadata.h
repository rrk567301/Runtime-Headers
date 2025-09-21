@class NSHashTable;

@interface IXAppInstallObjectsMetadata : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSHashTable *instances;

- (id)init;
- (void)addObject:(id)a0;
- (void).cxx_destruct;

@end
