@class NSArray, NSString, NSMutableArray;

@interface NFNdefMessage : NSObject <NSSecureCoding, NFNdefMessage> {
    NSMutableArray *_records;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned int)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addRecord:(id)a0;
- (id)asData;
- (id)decode;
- (id)initWithNDEFMessage:(id)a0;
- (void)addRecordArray:(id)a0;

@end
