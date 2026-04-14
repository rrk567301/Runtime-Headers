@class , NSString, __end_, CCDataDescriptor, CCData;

@interface CCLane : CCResource <CCVisitable> {
    struct vector<CCData *, std::allocator<CCData *>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } bufferedData;
    long long headIndex;
    long long previousHeadIndex;
    CCDataDescriptor *_dataDescriptor;
}

@property (class) unsigned long long defaultBuferSize;

@property (nonatomic) long long laneType;
@property (readonly, nonatomic) CCData *lastObject;
@property (readonly, nonatomic) CCData *nextObject;
@property (nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) CCData *previousObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)saveState;
- (void)acceptVisitor:(id)a0;
- (id)objectAtIndex:(long long)a0;
- (void)resetData;
- (void).cxx_destruct;
- (id)formattedDescription:(unsigned long long)a0;
- (id).cxx_construct;
- (BOOL)acceptsObject:(id)a0;
- (id)init;
- (id)debugQuickLookObject;
- (void)releaseBuffers;
- (BOOL)attach:(id)a0;
- (id)initWithBufferSize:(unsigned long long)a0;
- (id)dataDescriptor;
- (BOOL)hasAttachedData;
- (BOOL)acceptsType:(Class)a0;
- (id)dataPassingTest:(id /* block */)a0;
- (id)initWithPreallocatedData:(id)a0 bufferSize:(unsigned long long)a1;
- (BOOL)reallocateResourcesWithDeviceGroup:(id)a0;
- (void)restoreSate:(id)a0;
- (void)setDataDescriptor:(id)a0;
- (void)updateDataDescriptor:(id)a0;

@end
