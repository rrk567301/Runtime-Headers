@interface MTLProfileControl : NSObject <NSCopying>

@property (nonatomic) unsigned char uscCliqueTraceLevel;
@property (nonatomic) BOOL uscEmitPosition;
@property (nonatomic) BOOL uscEmitThreadControlFlow;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;

@end
