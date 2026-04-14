@class NSString, NSUUID;

@interface FPFSChangeRecord : NSObject

@property (retain, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) unsigned int docID;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned int rawFlags;
@property (readonly, nonatomic) unsigned long long eventID;
@property (readonly, nonatomic) BOOL isBarrier;
@property (readonly, nonatomic) BOOL isNotification;
@property (readonly, nonatomic) NSUUID *barrierUUID;
@property (readonly, nonatomic) unsigned int additionalDebugFlags;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)additionalDebugFlagsForHistoricalStream:(BOOL)a0;
- (id)initWithPath:(id)a0 fileID:(unsigned long long)a1 docID:(unsigned int)a2 flags:(unsigned int)a3 eventID:(unsigned long long)a4;

@end
