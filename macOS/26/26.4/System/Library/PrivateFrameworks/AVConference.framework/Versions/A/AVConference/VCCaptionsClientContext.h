@class NSString;

@interface VCCaptionsClientContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) unsigned int uniqueIdentifier;
@property (copy, nonatomic) NSString *localeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithStreamToken:(long long)a0;

@end
