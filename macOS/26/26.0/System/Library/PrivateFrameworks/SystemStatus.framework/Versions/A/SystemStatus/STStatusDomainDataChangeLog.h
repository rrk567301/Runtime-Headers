@class NSOrderedSet, BSIntegerSet, NSDictionary;

@interface STStatusDomainDataChangeLog : NSObject {
    NSOrderedSet *_sortedRecordKeys;
    NSDictionary *_recordsByKey;
}

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

- (id)initWithRecordKeys:(id)a0;
- (id)currentDataForDomain:(unsigned long long)a0;
- (id)recordForKey:(id)a0;
- (void).cxx_destruct;

@end
