@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;

- (void)dealloc;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)encodedData;
- (void)finishEncoding;
- (void)_configure;
- (id)initForWritingWithMessage:(id)a0;

@end
