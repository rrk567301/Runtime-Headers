@interface ICDCopyObjectDataImp : ICDBaseCommandImp {
    char *_bufferPtr;
    long long _bufferSize;
    BOOL _deleteAfterGetData;
}

- (id)process;
- (void)dealloc;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
