@class NSData, NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;
@property (readonly, copy) NSData *encodedData;

+ (void *)XPCTransportTypeAssociationKey;

- (void)_configure;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)initForWritingWithMessage:(id)a0;
- (void)dealloc;
- (void)finishEncoding;
- (void).cxx_destruct;
- (void)_hh2Configure;

@end
