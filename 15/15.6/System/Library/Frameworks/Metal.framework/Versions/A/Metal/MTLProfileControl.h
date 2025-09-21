@interface MTLProfileControl : NSObject <NSCopying>

@property (nonatomic) unsigned char uscCliqueTraceLevel;
@property (nonatomic) char uscEmitPosition;
@property (nonatomic) char uscEmitThreadControlFlow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;

@end
