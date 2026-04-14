@class NSMutableDictionary;

@interface ICDSendPTPCmdImp : ICDBaseCommandImp {
    NSMutableDictionary *_dataDict;
}

- (id)process;
- (void)dealloc;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
