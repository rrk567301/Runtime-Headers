@class NSString, NSDate;

@interface PLArchiveEntry : PLEntry

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *compressedPath;
@property (readonly, nonatomic) NSString *crPath;
@property (readonly, nonatomic) NSString *name;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSString *uuid;
@property (nonatomic) double systemTimeOffset;
@property (readonly) char systemTimeOffsetModified;
@property (readonly) char fullMode;
@property (nonatomic) long long stage;
@property (nonatomic) unsigned long long numAttempts;
@property (retain, nonatomic) NSDate *syncedOffDate;
@property (retain, nonatomic) NSDate *removedDate;
@property (nonatomic) long long mainDBSizeAtStart;
@property (readonly, nonatomic) char syncedOff;
@property (readonly, nonatomic) char removed;

+ (void)load;
+ (id)storageQueue;
+ (id)entryKey;

- (void).cxx_destruct;
- (void)log;
- (id)initWithMetadata:(id)a0;
- (id)initEntryWithRawData:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 andUUID:(id)a2;

@end
