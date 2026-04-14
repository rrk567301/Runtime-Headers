@interface AuRA_IOTopologyChannelMapping : NSObject <NSCopying>

@property (nonatomic) unsigned int ioStreamChannelIndex;
@property (nonatomic) unsigned int hwStreamChannelIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
