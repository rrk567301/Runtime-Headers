@class NSData, IDSMessageContext, NSMutableDictionary;

@interface IDSProtobuf : NSObject <NSCoding> {
    NSMutableDictionary *_protoBufParams;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *uncompressedData;
@property (nonatomic) unsigned short type;
@property (nonatomic) char isResponse;
@property (retain, nonatomic) IDSMessageContext *context;

+ (id)keyRepresentationForType:(unsigned short)a0 isResponse:(char)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithUncompressedData;
- (id)initWithProtobufData:(id)a0 type:(unsigned short)a1 isResponse:(char)a2;

@end
