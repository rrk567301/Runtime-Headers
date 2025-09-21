@class __end_, NSString, CCDataDescriptor, __cap_, CCData;

@interface CCLane : CCResource <CCVisitable> {
    struct vector<CCData *, std::allocator<CCData *>> { __end_ **__begin_; __cap_ **x0; id *x1; } bufferedData;
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

- (id)debugQuickLookObject;
- (id)saveState;
- (BOOL)acceptsObject:(id)a0;
- (void)acceptVisitor:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetData;
- (id)objectAtIndex:(long long)a0;
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
