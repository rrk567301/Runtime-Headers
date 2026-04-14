@class NSString;

@interface TPSInstalledAppInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *minVersion;
@property (copy, nonatomic) NSString *maxVersion;

- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
