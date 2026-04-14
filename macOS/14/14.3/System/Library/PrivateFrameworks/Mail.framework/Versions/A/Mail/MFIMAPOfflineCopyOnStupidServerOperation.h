@class NSPointerArray, NSMutableArray;

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPCopyMessagesOperation

@property (retain, nonatomic) NSMutableArray *messageIds;
@property (retain, nonatomic) NSPointerArray *internalDates;

- (void).cxx_destruct;
- (unsigned char)_magic;
- (void)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (void)serializeIntoData:(id)a0;

@end
