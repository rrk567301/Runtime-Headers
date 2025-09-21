@class NSString, IXPlaceholder;
@protocol MILocationProtocol;

@interface IXPlaceholderSpecification : NSObject

@property (readonly, copy, nonatomic) NSString *localizedBundleName;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long placeholderType;
@property (readonly, nonatomic) unsigned long long client;
@property (readonly, copy, nonatomic) id<MILocationProtocol> location;
@property (copy, nonatomic) NSString *bundleDirectoryName;
@property (nonatomic) unsigned long long installType;
@property (weak, nonatomic) IXPlaceholder *parentPlaceholder;

- (void).cxx_destruct;
- (id)initWithLocalizedBundleName:(id)a0 bundleID:(id)a1 type:(unsigned long long)a2 client:(unsigned long long)a3 location:(id)a4;

@end
