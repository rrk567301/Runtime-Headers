@class NSString, ICTTMergeableAttributedString, NSArray, NSUUID, ICCRDocument, NSObject;
@protocol ICCRUndoDelegate;

@interface ICTTArray : NSObject <ICCRCoding, ICTTMergeableStringDelegate, ICCRDataType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ICTTMergeableAttributedString *contents;
@property (readonly, nonatomic) NSArray *nsArray;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (weak, nonatomic) ICCRDocument *document;
@property (weak, nonatomic) NSObject<ICCRUndoDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)indexOfObject:(id)a0;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)walkGraph:(id /* block */)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithContents:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)endEditing;
- (void)beginEditing;
- (void)removeLastObject;
- (id)deltaSince:(id)a0 in:(id)a1;
- (id)tombstone;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addUndoCommand:(id)a0;
- (void)saveToArchive:(void *)a0;
- (id)serializeDataFromArchive:(const void *)a0;
- (id)textAttachmentAtIndex:(unsigned long long)a0;
- (BOOL)wantsUndoCommands;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithArchive:(const void *)a0 replicaID:(id)a1;
- (id)initWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0 stringArray:(const void *)a1;

@end
