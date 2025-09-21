@class SKDisk, NSMutableArray;

@interface SKPartitionTable : NSObject

@property (retain) SKDisk *disk;
@property unsigned int sectorSize;
@property struct __MKMedia { } *mediaRef;
@property (retain, nonatomic) NSMutableArray *partitions;

+ (struct __MKMedia { } *)createMediaRefWithDisk:(id)a0 error:(id *)a1;
+ (id)partitionIDFromDisk:(id)a0;
+ (char)updatePartitionTypeWithPartitions:(id)a0 partID:(id)a1 newType:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (char)allocateMediaRef:(id *)a0;
- (char)fitToContainerSize:(unsigned long long)a0 error:(id *)a1;
- (void)flushMediaRef;
- (id)initWithDisk:(id)a0 error:(id *)a1;
- (char)overwriteExistingMediaLayout:(id)a0 opts:(struct __CFDictionary { } *)a1 partitionScheme:(int)a2;
- (char)overwriteExistingMediaLayout:(id)a0 opts:(struct __CFDictionary { } *)a1 partitionScheme:(int)a2 size:(unsigned long long)a3;
- (char)overwritePartitionAt:(id)a0 filesystem:(id)a1 error:(id *)a2;
- (char)resizePartitionID:(id)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 error:(id *)a3;
- (char)writeNewMediaLayout:(id)a0 partitionScheme:(unsigned long long)a1;
- (char)writePartitionScheme:(unsigned long long)a0 error:(id *)a1;

@end
