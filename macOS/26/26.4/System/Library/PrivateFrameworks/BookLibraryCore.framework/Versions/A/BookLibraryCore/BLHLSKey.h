@class NSURL, NSString;

@interface BLHLSKey : NSObject

@property (readonly, nonatomic) long long method;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *keyFormat;
@property (readonly, nonatomic) NSString *keyFormatVersions;
@property (readonly, nonatomic) NSString *iv;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)setPropertiesFromAttributeList:(id)a0;
- (BOOL)isEqualToHLSKey:(id)a0;
- (BOOL)isFormatSupported;

@end
