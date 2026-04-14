@class NSHashTable;

@interface IXAppInstallObjectsMetadata : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSHashTable *instances;

- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)init;

@end
