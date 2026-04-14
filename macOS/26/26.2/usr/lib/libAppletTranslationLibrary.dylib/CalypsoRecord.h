@class NSData;

@interface CalypsoRecord : NSObject

@property (nonatomic) unsigned char sfi;
@property (nonatomic) unsigned char number;
@property (retain, nonatomic) NSData *data;

+ (id)withRecordSfi:(unsigned char)a0 recordNumber:(unsigned char)a1 recordData:(id)a2;

- (void).cxx_destruct;

@end
