@class NSData, NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;
@property (readonly, copy) NSData *encodedData;

+ (void *)XPCTransportTypeAssociationKey;

- (void)_configure;
- (void)_hh2Configure;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishEncoding;
- (id)initForWritingWithMessage:(id)a0;

@end
