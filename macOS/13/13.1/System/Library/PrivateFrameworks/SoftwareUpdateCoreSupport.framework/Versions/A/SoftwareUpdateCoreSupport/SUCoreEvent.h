@class NSURL, NSMutableDictionary, NSString;

@interface SUCoreEvent : NSObject

@property (retain, nonatomic) NSMutableDictionary *allFields;
@property (nonatomic) BOOL changedSinceReported;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *reportedUUID;

- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)initWithEventDictionary:(id)a0 extendingWith:(id)a1 reportingToServer:(id)a2;
- (BOOL)isEqualErrorEvent:(id)a0;
- (void)incrementErrorCount;
- (id)getAugmentedEvent;
- (id)getMacPlatform;

@end
