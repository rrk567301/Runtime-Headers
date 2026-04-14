@class NSString, NSMutableDictionary;

@interface MultipartMessageHeaderField : NSObject

@property (readonly) NSString *value;
@property (readonly) NSMutableDictionary *params;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)a0 contentEncoding:(unsigned long long)a1;
- (BOOL)parseHeaderValueBytes:(char *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;

@end
