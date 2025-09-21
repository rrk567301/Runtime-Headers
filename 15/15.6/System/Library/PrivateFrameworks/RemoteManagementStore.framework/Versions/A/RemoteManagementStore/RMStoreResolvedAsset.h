@class NSData, NSURL, NSString;

@interface RMStoreResolvedAsset : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *assetData;
@property (readonly, copy, nonatomic) NSURL *assetFile;
@property (readonly, copy, nonatomic) NSData *assetKeychainReference;
@property (readonly, copy, nonatomic) NSString *assetKeychainUserName;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithFile:(id)a0;
- (id)initWithKeychainReference:(id)a0;
- (id)initWithKeychainReference:(id)a0 userName:(id)a1;
- (char)isEqualToResolvedAsset:(id)a0;

@end
