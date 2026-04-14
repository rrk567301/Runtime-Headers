@class NSString, NSUUID;

@interface AVCaptureTimecodeSource : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *uuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithDisplayName:(id)a0 sourceType:(long long)a1 uuid:(id)a2;
- (BOOL)utilizesRingBufferSyncDiscipline;

@end
