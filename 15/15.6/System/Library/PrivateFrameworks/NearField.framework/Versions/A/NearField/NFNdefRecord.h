@class NSData, NSString;

@interface NFNdefRecord : NSObject <NSSecureCoding, NFNdefRecord> {
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned char header;
@property (nonatomic) char messageBegin;
@property (nonatomic) char messageEnd;
@property (nonatomic) char shortRecord;
@property (nonatomic) char chunked;
@property (nonatomic) unsigned char typeNameFormat;
@property (retain, nonatomic) NSData *type;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSData *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyRecord;
+ (id)recordWithTelephone:(id)a0;
+ (id)recordWithText:(id)a0 lang:(id)a1;
+ (id)recordWithURI:(id)a0;
+ (id)recordsFromBytes:(const void *)a0 length:(unsigned int)a1;

- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned int)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asData;
- (id)decode;
- (char)_idLengthPresent;
- (void)_setIdLengthPresent:(char)a0;
- (id)initWithNDEFRecord:(id)a0;
- (char)isURIRecord;

@end
