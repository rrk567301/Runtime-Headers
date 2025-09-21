@class NSString;

@interface PKScript : NSObject <NSCopying> {
    char _scriptTimeoutSpecified;
}

@property (readonly) char isTimeoutUndefined;
@property (copy) NSString *path;
@property double estimatedRunningTime;
@property (nonatomic) char systemIntegrityProtectionProhibited;
@property (nonatomic) unsigned long long scriptTimeoutInSeconds;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithPath:(id)a0;
- (id)initWithPath:(id)a0 estimatedRunningTime:(double)a1;

@end
