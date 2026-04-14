@class NSData, NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;
@property (readonly, copy) NSData *encodedData;

+ (void *)XPCMessageKey;
+ (void *)XPCTransportTypeAssociationKey;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)finishEncoding;
- (id)initForWritingWithMessage:(id)a0;
- (void)_configure;
- (void)_hh2Configure;
- (void).cxx_destruct;
- (void)dealloc;

@end
