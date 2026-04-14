@class NSString;

@interface BMStreamsAccessDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long streamType;
@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) unsigned long long domain;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAccessMode:(unsigned long long)a0 streamType:(unsigned long long)a1 streamIdentifier:(id)a2;
- (id)accessDescriptorWithAccessMode:(unsigned long long)a0;

@end
