@class NSRecursiveLock, NSString, NSDate, NSMutableArray, OKDocument;

@interface OKDocumentInfo : NSObject {
    NSRecursiveLock *_infoLock;
}

@property (nonatomic) OKDocument *document;
@property (copy) NSString *uuid;
@property (copy) NSDate *creationDate;
@property (copy) NSDate *lastModifiedDate;
@property (copy) NSString *versionID;
@property unsigned long long formatVersion;
@property double apiVersion;
@property unsigned long long format;
@property (copy) NSString *producerIdentifier;
@property double producerVersion;
@property char requiresProducer;
@property (copy) NSMutableArray *resolutions;
@property char couchPotatoSupported;
@property double couchPotatoDelay;
@property char motionSupported;
@property char trailerSupported;
@property (copy) NSString *trailerNavigatorName;
@property (copy) NSString *mainNavigatorName;

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (void)lock;
- (void)unlock;
- (void)reset;
- (void)importFromDictionary:(id)a0;

@end
