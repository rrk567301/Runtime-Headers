@class NSData, NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;
@property (readonly, copy) NSData *encodedData;

+ (void *)XPCTransportTypeAssociationKey;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)finishEncoding;
- (void)_configure;
- (id)initForWritingWithMessage:(id)a0;

@end
