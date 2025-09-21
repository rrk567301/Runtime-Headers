@class NSArray;

@interface SKGEmbedding : NSObject

@property (retain, nonatomic) NSArray *secondaryEmbeddings;
@property (retain, nonatomic) NSArray *primaryEmbeddings;
@property (nonatomic) unsigned long long firstChunkLength;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long size;
@property (copy) NSArray *fsIndexDataContentVersion;
@property (nonatomic) BOOL isFileSystemConsistent;

- (void).cxx_destruct;

@end
