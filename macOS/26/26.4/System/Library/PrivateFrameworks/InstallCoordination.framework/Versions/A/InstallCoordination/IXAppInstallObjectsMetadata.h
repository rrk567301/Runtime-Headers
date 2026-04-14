@class NSHashTable;

@interface IXAppInstallObjectsMetadata : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSHashTable *instances;

- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
