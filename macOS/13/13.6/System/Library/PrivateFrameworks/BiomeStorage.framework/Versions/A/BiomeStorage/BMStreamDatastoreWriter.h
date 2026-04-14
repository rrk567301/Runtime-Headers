@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore *_inner;
}

@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (void).cxx_destruct;
- (Class)eventBodyClass;
- (id)initWithStream:(id)a0 config:(id)a1;
- (id)streamIdentifier;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (void)syncMappedFiles;
- (BOOL)_writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;
- (BOOL)writeEventBodyClass:(Class)a0;
- (BOOL)writeEventWithEventBody:(id)a0;

@end
