@class NSString;

@interface SDSVersion : NSObject

@property (nonatomic, readonly) unsigned short major;
@property (nonatomic, readonly) unsigned short minor;
@property (nonatomic, readonly) unsigned short patch;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)versionWithMajor:(unsigned short)a0 minor:(unsigned short)a1 patch:(unsigned short)a2;

- (long long)compare:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithMajor:(unsigned short)a0 minor:(unsigned short)a1 patch:(unsigned short)a2;

@end
