@class NSString;

@interface VCCaptionsClientContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) unsigned int uniqueIdentifier;
@property (copy, nonatomic) NSString *localeIdentifier;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithStreamToken:(long long)a0;

@end
