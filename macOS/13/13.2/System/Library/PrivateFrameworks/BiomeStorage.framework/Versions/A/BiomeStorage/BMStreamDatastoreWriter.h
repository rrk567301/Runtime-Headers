@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore *_inner;
}

@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (void).cxx_destruct;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (id)initWithStream:(id)a0 config:(id)a1;
- (Class)eventBodyClass;
- (id)streamIdentifier;
- (BOOL)writeEventWithEventBody:(id)a0;
- (void)syncMappedFiles;
- (BOOL)writeEventBodyClass:(Class)a0;
- (BOOL)_writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;

@end
