@class NSString, NSMutableDictionary, ICDBaseObjectImp;

@interface ICDBaseCommandImp : NSObject {
    NSString *_name;
    short _commandError;
    ICDBaseObjectImp *_objectPriv;
    NSMutableDictionary *_privateData;
    NSMutableDictionary *_commandData;
}

- (void)dealloc;
- (id)process;
- (id)initWithCommandDictonary:(id)a0 name:(id)a1;
- (id)initWithCommandDictionary:(id)a0;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1 name:(id)a2;
- (void)printCommandData:(id)a0 commandDone:(BOOL)a1;
- (id)doProcess;
- (short)updateCommandData;

@end
