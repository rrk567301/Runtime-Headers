@class MSOID, NSData;
@protocol MSCMSMessage;

@interface MSCMSCompressedData : NSObject <MSCMSMessage> {
    void /* function */ dataContent;
}

@property (nonatomic, retain) MSOID *type;
@property (nonatomic, copy) NSData *dataContent;
@property (nonatomic, retain) id<MSCMSMessage> embeddedContent;
@property (nonatomic, retain) MSOID *contentType;

+ (id)decodeMessageSecurityObject:(id)a0 options:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)encodeMessageSecurityObject:(id *)a0;
- (id)initWithDataContent:(id)a0 error:(id *)a1;
- (id)initWithEmbeddedContent:(id)a0 error:(id *)a1;

@end
