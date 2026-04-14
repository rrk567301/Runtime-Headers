@interface MTLProfileControl : NSObject <NSCopying>

@property (nonatomic) unsigned char uscCliqueTraceLevel;
@property (nonatomic) BOOL uscEmitPosition;
@property (nonatomic) BOOL uscEmitThreadControlFlow;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;

@end
