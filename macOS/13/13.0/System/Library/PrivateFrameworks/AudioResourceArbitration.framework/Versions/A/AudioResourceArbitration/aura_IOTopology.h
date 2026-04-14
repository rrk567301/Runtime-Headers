@class NSString, NSArray;

@interface AuRA_IOTopology : NSObject <NSCopying>

@property (retain, nonatomic) NSString *ioTopologyUID;
@property (retain, nonatomic) NSString *ioTopologyName;
@property (retain, nonatomic) NSString *masterClockUID;
@property (nonatomic) unsigned char inputIOAdaptationPolicy;
@property (nonatomic) unsigned char outputIOAdaptationPolicy;
@property (retain, nonatomic) NSArray *inputIOStreams;
@property (retain, nonatomic) NSArray *outputIOStreams;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
