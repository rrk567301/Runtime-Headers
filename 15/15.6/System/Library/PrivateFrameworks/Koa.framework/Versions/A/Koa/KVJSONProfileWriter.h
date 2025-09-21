@class NSString, NSOutputStream;

@interface KVJSONProfileWriter : NSObject <KVProfileWriter> {
    NSOutputStream *_stream;
    unsigned int _datasetIdx;
    unsigned int _itemIdx;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (char)addItem:(id)a0 error:(id *)a1;
- (char)finishDataset:(id *)a0;
- (char)finishProfile:(id *)a0;
- (char)startDataset:(id)a0 error:(id *)a1;
- (char)startProfile:(id)a0 error:(id *)a1;

@end
