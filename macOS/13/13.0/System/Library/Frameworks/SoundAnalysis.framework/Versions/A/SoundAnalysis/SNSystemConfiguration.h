@interface SNSystemConfiguration : NSObject {
    unsigned int _channelCount;
    double _sampleRate;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
