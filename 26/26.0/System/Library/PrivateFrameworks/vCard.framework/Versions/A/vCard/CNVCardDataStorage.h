@class NSString, NSMutableData;

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage> {
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageWithData:(id)a0;

- (void)appendString:(id)a0;
- (id)initWithData:(id)a0;
- (void)appendFormat:(id)a0;
- (unsigned long long)estimatedDataLength;
- (void)appendData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)currentLength;
- (id)insertionMarker;
- (void)appendString:(id)a0 usingEncoding:(unsigned long long)a1;
- (void)insertString:(id)a0 atMarker:(id)a1;

@end
