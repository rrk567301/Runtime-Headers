@class NSUUID, NSString, ICTTArray, ICCRDocument, ICCRDictionary, NSObject, NSArray;
@protocol ICCRUndoDelegate;

@interface ICCRArray : NSObject <ICCRCoding, ICCRUndoDelegate, ICCRDataType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICTTArray *array;
@property (retain, nonatomic) ICCRDictionary *contents;
@property (nonatomic) BOOL moveClock;
@property (weak, nonatomic) ICCRDocument *document;
@property (weak, nonatomic) NSObject<ICCRUndoDelegate> *delegate;
@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)walkGraph:(id /* block */)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (id)_addObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (id)deltaSince:(id)a0 in:(id)a1;
- (id)tombstone;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (id)_insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)_insertObject:(id)a0 withIdentifier:(id)a1 atIndex:(unsigned long long)a2 forUndo:(BOOL)a3;
- (unsigned long long)firstIndexOf:(id)a0 fromIndex:(unsigned long long)a1;
- (void)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0 forUndo:(BOOL)a1;
- (BOOL)wantsUndoCommands;
- (void)encodeWithICCRCoder:(id)a0;
- (void)encodeWithICCRCoder:(id)a0 array:(void *)a1;
- (id)initWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0 array:(const void *)a1;
- (id)initWithICTTArray:(id)a0 contents:(id)a1 document:(id)a2;

@end
