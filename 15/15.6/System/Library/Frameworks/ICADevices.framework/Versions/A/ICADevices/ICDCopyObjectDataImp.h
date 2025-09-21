@interface ICDCopyObjectDataImp : ICDBaseCommandImp {
    char *_bufferPtr;
    long long _bufferSize;
    char _deleteAfterGetData;
}

- (void)dealloc;
- (id)process;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
