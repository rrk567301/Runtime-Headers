@class NSString;

@interface BMStreamsAccessDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long streamType;
@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) unsigned long long domain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accessDescriptorWithAccessMode:(unsigned long long)a0;
- (id)initWithAccessMode:(unsigned long long)a0 streamType:(unsigned long long)a1 streamIdentifier:(id)a2;

@end
