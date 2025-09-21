@class NSString;

@interface ICMigrationDeviceInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) char upgraded;
@property (readonly, nonatomic) char upgradedToIOS13;
@property (readonly, nonatomic) char upgradedToIOS14EorMacOS11E;
@property (readonly, nonatomic) char upgradable;
@property (readonly, nonatomic) char upgradableToIOS13;
@property (readonly, nonatomic) char upgradableToIOS14orMacOS11;
@property (readonly, nonatomic) char isOSXDevice;
@property (readonly, nonatomic) char isIOSDevice;

+ (void)logDeviceList:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)attributedStringWithAttributes:(id)a0 asteriskColor:(id)a1;
- (id)initWithName:(id)a0 upgradable:(char)a1 upgraded:(char)a2;
- (id)loggableDescription;
- (char)shouldBeHidden;

@end
