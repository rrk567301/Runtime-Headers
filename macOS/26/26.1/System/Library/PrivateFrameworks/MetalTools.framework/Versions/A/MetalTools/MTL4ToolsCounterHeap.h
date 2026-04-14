@class NSString;

@interface MTL4ToolsCounterHeap : MTLToolsObject <MTL4CounterHeapGGDSPI>

@property (copy) NSString *label;
@property (readonly) unsigned long long count;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
