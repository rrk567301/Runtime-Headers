@class NSString;

@interface PKScript : NSObject <NSCopying> {
    BOOL _scriptTimeoutSpecified;
}

@property (readonly) BOOL isTimeoutUndefined;
@property (copy) NSString *path;
@property double estimatedRunningTime;
@property (nonatomic) BOOL systemIntegrityProtectionProhibited;
@property (nonatomic) unsigned long long scriptTimeoutInSeconds;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)initWithPath:(id)a0 estimatedRunningTime:(double)a1;

@end
