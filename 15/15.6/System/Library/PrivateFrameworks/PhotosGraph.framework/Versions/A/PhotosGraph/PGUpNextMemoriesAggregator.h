@class NSObject, NSMutableArray, NSMutableSet;
@protocol OS_os_log;

@interface PGUpNextMemoriesAggregator : NSObject

@property (retain, nonatomic) NSMutableArray *acceptedMemories;
@property (readonly, nonatomic) NSMutableSet *keyAssetLocalIdentifiers;
@property (readonly, nonatomic) NSMutableSet *lowercaseTitles;
@property (readonly, nonatomic) char gateOnUserFeedback;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (char)addUpNextMemory:(id)a0 debugInfo:(id *)a1;
- (id)initWithLowercaseTitles:(id)a0 keyAssetLocalIdentifiers:(id)a1 gateOnUserFeedback:(char)a2 loggingConnection:(id)a3;

@end
