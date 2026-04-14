@class NSURL, NSString;

@interface ICNAServerEnvironment : NSObject

@property (class, readonly, nonatomic) NSURL *fallbackDefaultTargetURLFromPrefs;

@property char serverEnvironmentType;
@property (retain, nonatomic) NSURL *targetURL;
@property (retain, nonatomic) NSString *aaEndPointTypeName;

+ (id)defaultAMSBag;
+ (id)ic_defaultBagKeySet;

- (void).cxx_destruct;
- (id)init;
- (id)fallbackDefaultTargetURL;

@end
