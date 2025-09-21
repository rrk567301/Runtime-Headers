@class NSString, HKDeletedObject, HKSample, NSArray, NSMutableSet;
@protocol HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator;

@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator> {
    id<HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator> _sourceIterator;
    NSArray *_keyPaths;
    NSMutableSet *_seenValues;
}

@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) long long objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKDeletedObject *deletedObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (char)advanceWithError:(id *)a0;
- (id)initWithSourceIterator:(id)a0 keyPaths:(id)a1;
- (id)iteratorStateData;
- (char)restoreIteratorStateFromData:(id)a0 error:(id *)a1;

@end
