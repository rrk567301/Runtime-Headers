@class NSString, HUComfortSoundsShuffler, NSURL, AXAsset;

@interface HUComfortSound : NSObject <NSSecureCoding, HUComfortSoundsDelegate, HUComfortSoundProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *path;
@property (nonatomic) unsigned long long soundGroup;
@property (retain, nonatomic) AXAsset *asset;
@property (retain, nonatomic) HUComfortSoundsShuffler *fileShuffler;
@property (nonatomic) double volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)comfortSoundWithAsset:(id)a0;
+ (id)defaultComfortSoundForGroup:(unsigned long long)a0;
+ (id)soundWithName:(id)a0 path:(id)a1 andGroup:(unsigned long long)a2;

- (BOOL)isInstalled;
- (void)encodeWithCoder:(id)a0;
- (BOOL)canBeEdited;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBeDeleted;
- (id)nextFilePath;

@end
