@class NSString, NSMutableData, NSError;

@interface IMAPSimpleDownload : IMAPDownload {
    NSMutableData *_mdata;
    BOOL _knownLength;
    unsigned int _bytesFetched;
    NSError *_error;
}

@property (readonly, nonatomic) unsigned int expectedLength;
@property (nonatomic) BOOL isComplete;
@property (retain) NSString *partSectionSpecifier;
@property long long textSectionSpecifier;

- (id)description;
- (id)data;
- (void).cxx_destruct;
- (id)error;
- (void)setError:(id)a0;
- (unsigned int)bytesFetched;
- (id)initWithUid:(unsigned int)a0;
- (id)createCopy;
- (BOOL)handleFetchResult:(id)a0;
- (void)processResults;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)initWithUid:(unsigned int)a0 partSectionSpecifier:(id)a1 textSectionSpecifier:(long long)a2 length:(unsigned int)a3;
- (id)initWithUid:(unsigned int)a0 partSectionSpecifier:(id)a1 textSectionSpecifier:(long long)a2 estimatedLength:(unsigned int)a3;

@end
