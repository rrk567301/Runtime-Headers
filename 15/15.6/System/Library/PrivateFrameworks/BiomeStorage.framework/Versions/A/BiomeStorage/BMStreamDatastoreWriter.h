@class NSString, BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject <BMStreamDatastoreWriting> {
    BMStreamDatastore *_inner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char isDataAccessible;

+ (id)outOfProcessWriterForStream:(id)a0 user:(unsigned int)a1 eventDataClass:(Class)a2;

- (void).cxx_destruct;
- (id)initWithStream:(id)a0 config:(id)a1 eventDataClass:(Class)a2;
- (id)streamIdentifier;
- (char)writeEventWithEventBody:(id)a0 timestamp:(double)a1 outEventSize:(unsigned long long *)a2;
- (void)syncMappedFiles;
- (char)_writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;
- (Class)eventBodyClass;
- (id)initWithStream:(id)a0 config:(id)a1;
- (char)writeEventBodyClass:(Class)a0;
- (char)writeEventWithEventBody:(id)a0;
- (char)writeEventWithEventBody:(id)a0 timestamp:(double)a1;

@end
