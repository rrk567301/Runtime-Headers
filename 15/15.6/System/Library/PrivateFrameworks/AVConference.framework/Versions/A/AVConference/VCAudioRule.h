@interface VCAudioRule : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) char isSecondary;
@property (readonly, nonatomic) char sbr;
@property (readonly, nonatomic) unsigned int samplesPerBlock;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithPayload:(int)a0 isSecondary:(char)a1 sbr:(char)a2 samplesPerBlock:(unsigned int)a3;

@end
