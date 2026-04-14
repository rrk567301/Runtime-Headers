@interface AuRA_IOTopologyChannelMapping : NSObject <NSCopying>

@property (nonatomic) unsigned int ioStreamChannelIndex;
@property (nonatomic) unsigned int hwStreamChannelIndex;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
