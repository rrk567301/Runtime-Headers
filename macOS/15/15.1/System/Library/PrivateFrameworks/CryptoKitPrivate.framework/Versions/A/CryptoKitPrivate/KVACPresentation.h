@class NSData;

@interface KVACPresentation : NSObject

@property (readonly, retain, nonatomic) NSData *serverKeyId;
@property (readonly, retain, nonatomic) NSData *tag;
@property (readonly, retain, nonatomic) NSData *prefix;
@property (readonly, retain, nonatomic) NSData *presentationData;

- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 tagPrefix:(id)a1 error:(id *)a2;

@end
