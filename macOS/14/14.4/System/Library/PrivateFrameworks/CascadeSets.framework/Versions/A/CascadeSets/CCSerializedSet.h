@class NSData, CCSerializedSetMessage;

@interface CCSerializedSet : CCSet {
    CCSerializedSetMessage *_setMessage;
}

@property (readonly, nonatomic) NSData *data;

+ (id)serializeSet:(id)a0 changePublisher:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)changePublisher;
- (id)initWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 error:(id *)a2;
- (id)initWithItemType:(unsigned short)a0 descriptors:(id)a1 error:(id *)a2;

@end
