@class NSURL, NSMutableDictionary, NSString;

@interface SUCoreEvent : NSObject

@property (retain, nonatomic) NSMutableDictionary *allFields;
@property (nonatomic) char changedSinceReported;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *reportedUUID;

+ (char)isSharediPad;

- (void).cxx_destruct;
- (char)isSuccess;
- (id)getAugmentedEvent;
- (id)getMacPlatform;
- (void)incrementErrorCount;
- (id)initWithEventDictionary:(id)a0 extendingWith:(id)a1 reportingToServer:(id)a2;
- (char)isEqualErrorEvent:(id)a0;

@end
