@class NSString;

@interface _BlastDoorLPVideoProperties : NSObject <NSCopying>

@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSString *accessibilityText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
