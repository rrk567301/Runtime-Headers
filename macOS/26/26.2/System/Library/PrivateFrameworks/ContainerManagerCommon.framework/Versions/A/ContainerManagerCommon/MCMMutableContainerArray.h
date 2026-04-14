@class NSString;

@interface MCMMutableContainerArray : MCMContainerArray <MCMMutableContainerArray>

@property (nonatomic) unsigned long long generation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObjectsFromArray:(id)a0;
- (void)setGeneration:(unsigned long long)a0;
- (id)init;

@end
